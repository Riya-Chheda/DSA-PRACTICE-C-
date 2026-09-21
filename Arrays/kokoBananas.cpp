#include<iostream>
#include<vector>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h, int n) {
        int start = 0, end = 0, mid, ans;
        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            sum = sum + piles[i];
            end = max(end,piles[i]);
        }
        start = sum/h;
        if(!start)
        start = 1;//to avoid further mid = 0 error as start can be 0, end cannot be zero since it is the maximum element of array
        while(start<=end)
        {
            mid = start + (end - start) / 2;
            int total_time = 0;
            for(int i = 0; i < n; i++)
            {
                total_time += piles[i]/mid;
                if(piles[i] % mid)
                total_time++;
            }
            if(total_time > h)
            {
                start = mid + 1;
            }
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    };

int main() 
    {
    int n,m;
    cout<<"Enter total no. of piles : ";
    cin>>n;
    cout<<"Enter no. of hours : ";
    cin>>m;
    vector<int> arr(n);

    cout<<"Enter the number of bananas in each pile : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The minimum eating speed is : "<<minEatingSpeed(arr, m, n)<<endl;
    return 0;
};

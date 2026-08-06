#include<iostream>
#include<vector>
using namespace std;

int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int m = days;
      
        long long start = 0, end = 0, mid, ans;
        for(int i = 0; i < n; i++)
        {
            start = max(start,(long long)weights[i]);
            end += weights[i];
        }
        
        while(start <= end)
        {
            mid = start + (end - start) / 2;
            long long weight = 0;
            int day = 1;
            for(int i = 0; i < n; i++)
            {
                weight += weights[i];
                if(weight > mid)
                {
                    day++;
                    weight = weights[i];
                }
            }
            if(day <= m)
            {
                ans = mid;
                end = mid - 1;
            }
            else 
                start = mid + 1;
        }
        return ans;
    };

int main() 
    {
    int n,m;
    cout<<"Enter no. of packages : ";
    cin>>n;
    cout<<"Enter no. of days : ";
    cin>>m;
    vector<int> arr(n);

    cout<<"Enter the weights of packages in form of array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The minimum capacity required to ship all packages within the given days is : "<<shipWithinDays(arr,m)<<endl;
    return 0;
};
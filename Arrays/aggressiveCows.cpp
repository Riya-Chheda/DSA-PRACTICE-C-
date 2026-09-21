#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int isPossible(vector<int> &arr, int n, int c, int minAllowedDistance)//O(n) n = total no. of stalls
{
    int cow = 1, lastStallpos = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] - lastStallpos >= minAllowedDistance)
        {
            cow++;
            lastStallpos = arr[i];
        }
    if(cow == c)
    return true;
    }
return false;
}

int getDistance(vector<int> &arr, int n, int c)
{
//sort the array
sort(arr.begin(),arr.end());//O(nlogn)

int maxVal = arr[0], minVal = arr[0];
int start = 1, end = arr[n-1] - arr[0], mid, ans = -1;

while(start <= end) //O(log(range) * O(n))
{
mid = start + (end - start) / 2;

if(isPossible(arr, n, c, mid))
{
    ans = mid;
    start = mid + 1;
}
else
end = mid - 1;
}
return ans;
}
    

int main() 
    {
    int n,m;
    cout<<"Enter no. of stalls : ";
    cin>>n;
    cout<<"Enter no. of cows : ";
    cin>>m;
    vector<int> arr(n);

    cout<<"Enter the positions of stalls in form of array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The minimum distance between any two cows is : "<<getDistance(arr, n, m)<<endl;
    return 0;
};
//alternative approach
/*
int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int start = 1, end, mid, ans;
        //sort the array
        sort(arr.begin(),arr.end());
        //end value
        end = arr[n-1] - arr[0];
        
        //while loop
        while(start <= end)
        {
            mid = start + (end - start) / 2;
            int count = 1, pos = arr[0];
            
            for(int i = 1; i < n; i++)
            {
            if(pos+mid <= arr[i])
            {
                count++;
                pos = arr[i];
            }
            }
            if(count < k)
            {
                end = mid - 1;
            }
            else
            {
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }
        */
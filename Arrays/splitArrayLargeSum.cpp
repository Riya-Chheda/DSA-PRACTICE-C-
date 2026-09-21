#include<iostream>
#include<vector>
using namespace std;

    int splitArray(vector<int>& nums,int n,int k) {
        long long start = 0, end = 0, mid, ans = -1;
        for(int i = 0; i < n; i++)
        {
            start = max(start,(long long)nums[i]);
            end += nums[i];
        }
        
        while(start <= end)
        {
            mid = start + (end - start) / 2;
            long long maxSum = 0;
            int subArray = 1;
            for(int i = 0; i < n; i++)
            {
            maxSum += nums[i];
            if(maxSum > mid)//calculate feasibility i.e sum and subarray
            {
                subArray++;
                maxSum = nums[i];
            }
            }
            if(subArray > k)//check feasibility if valid or not
                start = mid + 1;
                else
                {
                    ans = mid; 
                    end = mid - 1;
                }
        }
        return (int)ans;
    };

    int main() 
    {
    int n,m;
    cout<<"Enter total no. of elements in array : ";
    cin>>n;
    cout<<"Enter no. of subarrays : ";
    cin>>m;
    vector<int> arr(n);

    cout<<"Enter the elements of the array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The minimum largest sum is : "<<splitArray(arr, n, m);
//  
#include<iostream>
#include<vector>
using namespace std;  

    int maxSubarraySum(vector<int>& arr) {
        // Code here
            long long maxi = INT_MIN, prefix = 0;
            for(int i = 0; i < arr.size(); i++)
            {
                prefix += arr[i];
                maxi = max(maxi,prefix);
                if(prefix < 0)
                prefix = 0;
            }
        return maxi;
    }

int main()
{
    int n;
    cout<<"Enter Total number of elements in the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum sum of contiguous subarray is : "<<maxSubarraySum(arr)<<endl;
}
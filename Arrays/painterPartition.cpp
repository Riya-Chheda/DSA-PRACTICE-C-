#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{
int painters = 1, time = 0;
for(int i = 0; i < n; i++)
{
    if(time + arr[i] < maxAllowedTime) { //o(n)
        time += arr[i];
    }
    else
    {
        painters++;
        time = arr[i];
    }
}
return painters <= m;
};

int minTimeToPaint(vector<int> &arr, int n, int m)
{
    int sum = 0, maxVal = INT_MAX;
    for(int i = 0; i < n; i++){ //o(n)
        sum +=arr[i];
        maxVal = max(maxVal,arr[i]);
    }

    int start = maxVal, end = sum, mid, ans = -1;

    while(start <= end)
    {
        mid = start + (end - start) / 2; //o(nlog(sum))
        // Check if it's possible to paint all boards within 'mid' time
        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }else {
             start = mid + 1;
        }
        // If possible, update ans and search for a smaller time
        // If not possible, search for a larger time
    }
    return ans;
}

int main() 
    {
    int n,m;
    cout<<"Enter no.of boards to be painted : ";
    cin>>n;
    cout<<"Enter no. of painters : ";
    cin>>m;
    vector<int> arr(n);

    cout<<"Enter the length of boards in form of array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The minimum time required to paint all boards is : "<<minTimeToPaint(arr,n,m)<<endl;
    return 0;
    };
    //overall time complexity is o(nlogn)
    
//alternative Approach
    /*
    class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        //return minimum time
        int N = arr.size();
        
        long long start = 0, end = 0, mid, ans;
        for(int i = 0; i < N; i++)
        {
            start = max(start,(long long)arr[i]);
            end += arr[i];
        }
        
        while(start <= end)
        {
            mid = start + (end - start) / 2;
            long long board = 0;
            int painter = 1;
            for(int i = 0; i < N; i++)
            {
                board += arr[i];
                if(board > mid)
                {
                    painter++;
                    board = arr[i];
                }
            }
            if(painter <= k)
            {
                ans = mid;
                end = mid - 1;
            }
            else 
                start = mid + 1;
        }
        return ans;
    }
};*/
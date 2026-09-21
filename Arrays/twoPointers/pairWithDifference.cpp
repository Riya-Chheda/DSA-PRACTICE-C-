#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findPair(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        
        int start = 0, end = 1,n = arr.size();
        vector<int> ans;
        
        if(target<0)
        target = target*-1;//for negative values of x we will take the absolute value of x
        
        while(end < n)
        {
           if(arr[end] - arr[start] == target)
           return {arr[start], arr[end]};
           else if(arr[end] - arr[start] < target)
           end++;
           else start++;
           
           if(start == end)
           end++;
        }
        return ans;
    }

int main()
{
    int n, target;
    cout << "Enter total no. of elements in array : ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements of the array : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target difference : ";
    cin >> target;

    vector<int> result = findPair(arr, target);
    if(result.size() == 2)
        cout << "The pair with the given difference is : " << result[0] << " and " << result[1] << endl;
    else
        cout << "No pair found with the given difference." << endl;

    return 0;
}
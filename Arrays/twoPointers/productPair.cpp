#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> isProduct(vector<int>& arr, long long target) {
        
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        vector<int> ans;
        
        if(target == 0)
            for(int i = 0; i < n; i++)
                if(arr[i] == 0)
                {
                if(i + 1 < n) return {arr[i], arr[i+1]}; // zero + next element
                else          return {arr[i-1], arr[i]}; // zero + prev element
                }
            return {};
        
        long long start = 0, end = n - 1;
        
        while(start < end)
        {
            if((long long)arr[start] * arr[end] == target)
            return {arr[start], arr[end]};
            else if((long long)arr[start] * arr[end] < target)
            start++;
            else
            end--;
        }
        
        start = 0; end = 1;
        while(end < n && arr[start] < 0 && arr[end] < 0)
        {
            if((long long)arr[start] * arr[end] == target)
            return {arr[start], arr[end]};
            else if((long long)arr[start] * arr[end] > target)
            start++;
            else 
            end++;
            if(start == end) end++;
        }

        return ans; 
    }

    int main()
    {
        
        int n;
        long long target;
        cout << "Enter total no. of elements in array : ";
        cin >> n;
        vector<int> arr(n);

        cout << "Enter the elements of the array : ";
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter the target product : ";
        cin >> target;

        vector<int> result = isProduct(arr, target);
        if(result.size() == 2)
            cout << "The pair with the given product is : " << result[0] << " and " << result[1] << endl;
        else
            cout << "No pair found with the given product." << endl;

        return 0;
    }
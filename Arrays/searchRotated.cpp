#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int target) {
        int n = arr.size();
        int ans = -1, start = 0, end = n-1, mid;
        while(start <= end)
        {
            mid = start + (end-start)/2;
            if(arr[mid] == target)
            return mid;
            else if(arr[mid] >= arr[0])
            {
                if(arr[start] <= target && arr[mid] >= target)
                end = mid - 1;
                else 
                start = mid + 1; 
            }
            else
            {
                if(arr[mid] <= target && arr[end] >= target)
                start = mid + 1;
                else
                end = mid - 1;
            }
        }
        return -1;
};

int main() {
    int n, target;
    cout<<"Enter the number of elements: ";  
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter the target element to search: ";
    cin>>target;

    int result = search(arr, target);
    if(result != -1)
        cout<<"The target element is found at index: "<<result<<endl;
    else
        cout<<"The target element is not found in the array."<<endl;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;    

int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 0, end = n-1, mid;
        while(start <= end)
        {
            mid = start + (end - start) / 2;
            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;
            else if(arr[mid] > arr[mid - 1])
            start = mid + 1;
            else//(arr[mid - 1] > arr[mid] )
            end = mid - 1;
        }
        return -1;
    }

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"The peak index is: "<<peakIndexInMountainArray(arr)<<endl;
    return 0;
}
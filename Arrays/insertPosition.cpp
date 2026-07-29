#include<iostream>
using namespace std;

int searchInsert(int arr[], int n, int target) {
    int start = 0, end = n - 1,mid,ans = n;
        
    while(start <= end)
        {
            mid = start + (end - start)/2;
            if(arr[mid] == target)
            return mid;
            else if(arr[mid] < target)
            start = mid + 1;
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    };

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements of the array in Increasing order: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    
    int result= searchInsert(arr, n, target);

    cout <<"Insert Position : "<<result<<" ";

    return 0;
};
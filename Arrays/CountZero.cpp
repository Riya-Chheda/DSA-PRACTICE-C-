#include<iostream>
using namespace std;

int countzeroes(int arr[], int n) {
    int start = 0, end = n - 1, mid;
    int FirstIndex = n;
        
    while(start <= end)
        {
            mid = start + (end - start)/2;
            if(arr[mid] == 0)
            {
                FirstIndex = mid;
                end = mid - 1; //search for first occurence of 0 on left side 
            }
            else
            {
               start = mid + 1; //search for first occurence of 0 on right side
            }
        }
        return n - FirstIndex; //return the count of 0's in the array
    };

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements of the array in Increasing order (1,0) : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int result = countzeroes(arr, n);
    cout<<"Count of Zeroes : "<<result<<" ";

    return 0;
};
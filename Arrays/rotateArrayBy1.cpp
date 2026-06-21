#include<iostream>
using namespace std;

void rotate(int arr[], int n) { //main logic
        int last = arr[n-1];
        
        for(int i=n-2 ; i >= 0; i--)
        arr[i+1] = arr[i];
        
        arr[0] = last;
}

int main()
{
    int n; // Ask user to enter array size
    cout<<"\nEnter the size of array :";
    cin>>n;

    int arr[100]; //Max Size

    cout<<"\nEnter "<<n<<"Elements of your Array :"; // ask user to  enter array elements
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    rotate(arr,n); //perform rotate operation

    cout<<"\nRotated Array :";
    for(int i = 0 ; i < n; i++) // Get Rotated Array in output
    cout<<arr[i]<<" ";

return 0;
}
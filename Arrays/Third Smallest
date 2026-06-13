//1. to find third smallest element in the array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int n;
   cout<<" Enter Size of the Array (n > 3)";
   cin>>n;
    vector<int> arr(n);
    
    cout<<"Enter the Elements of the Array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int third = INT_MAX;
    int second = INT_MAX;
    int small = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < small)
        {
            third = second;
            second = small;
            small = arr[i];
        }
        else if(arr[i] < second && arr[i] != small)
        {
            third = second;
            
            second = arr[i];
        }
        else if(arr[i] < third && arr[i] != second && arr[i] != small)
        {
            third = arr[i];
        }
}
    cout<<"Third Smallest Element is : "<<third<<endl;
} 
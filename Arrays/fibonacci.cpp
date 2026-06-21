#include<iostream>
using namespace std;

int main()
{
    int n; // position of number present in the series
    cout<<"\nEnter the position of your Number :";
    cin>>n;

    int arr[1000]; //max size of array

    arr[0] = 0;
    arr[1] = 1;  //initially fibonacci series begins with 0 and 1 

    for(int i = 2; i <= n-1; i++)//formula to calculate fibonacci number 
    arr[i] = arr[i-1] + arr[i-2];

    cout<<"The Number on "<<n<<"th position is:"<<arr[n-1]<<" ";

}
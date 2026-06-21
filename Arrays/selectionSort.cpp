//to sort the array in ascending order
/* #include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the Size of the Array:";
    cin>>n;

    cout<<"Enter the ELements of Array :";
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    for(int i = 0; i < n-1 ; i++)
    {
    int index = i;
    for(int j = i + 1; j < n; j++)
    {
        if(arr[j] < arr[index])
        index = j;
    }
    swap(arr[i],arr[index]);
    }

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}*/

//to sort the array in descending order
#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    cout<<"Enter the elements of Array : ";
    for(int i = 0; i < n; i++)
    cin>>arr[i]; 

    for(int i = 0; i < n-1 ; i++)
    {
    int index = i;
    for(int j = i + 1; j < n; j++)
    {
        if(arr[j] > arr[index])
        index = j;
    }
    swap(arr[i],arr[index]);
    }

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
     
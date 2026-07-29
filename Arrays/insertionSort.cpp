// 1. insertion sort in increasing order
#include<iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the total number of elements in the array: ";
    cin>>n;
    
    cout<<"Enter the elements of the array :";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"\nInitial Array: ";
    for(int k = 0; k < n;k++)
    {
        cout<<arr[k]<<" ";
    }
    
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j > 0 ; j--)
        {
            if(arr[j] < arr[j-1])
            {
            swap(arr[j],arr[j-1]);
            }
        }
        cout<<"\nAfter Pass: "<< i + 1<<": ";
        for(int k = 0; k < n;k++)
        {
        cout<<arr[k]<<" ";
        }
    }
    cout<<"\n Final Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
// 2. insertion sort in decreasing order
#include<iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the total number of elements in the array: ";
    cin>>n;
    
    cout<<"Enter the elements of the array :";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"\nInitial Array: ";
    for(int k = 0; k < n;k++)
    {
        cout<<arr[k]<<" ";
    }
    
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j > 0 ; j--)
        {
            if(arr[j] > arr[j-1])
            {
            swap(arr[j],arr[j-1]);
            }
        }
        cout<<"\nAfter Pass: "<< i + 1<<": ";
        for(int k = 0; k < n;k++)
        {
        cout<<arr[k]<<" ";
        }
    }
    cout<<"\n Final Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
//3. Insertion sort by applied from ending in the array
#include<iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the total number of elements in the array: ";
    cin>>n;
    
    cout<<"Enter the elements of the array :";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"\nInitial Array: ";
    for(int k = 0; k < n;k++)
    {
        cout<<arr[k]<<" ";
    }
    
    for(int i = n - 2; i >= 0; i--)              
    {
        for(int j = i; j < n - 1; j++)            
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            else
            {
                break;                             
            }
        }
        cout<<"\nAfter Pass "<< n - i <<": ";
        for(int k = 0; k < n;k++)
        {
            cout<<arr[k]<<" ";
        }
    }
    cout<<"\n Final Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
//1. Sort the array in ascending order
/*
#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = n - 2; i >= 0; i--)
    {
        bool swapped = 0;
        for(int j = 0; j <= i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if(!swapped)
        break;
    }
    // final part to output the array
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/
//2. sort the array in descending order
// Online C++ compiler to run C++ program online
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
    
    for(int i = n-1; i >= 0; i--)
    {
        bool swapped = 0;
        for(int j = 0; j < i; j++)
        {
            if(arr[j] < arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            swapped = 1;
            }
        }
        if(swapped == 0)
        break;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
//3. Sort Array of Characters in Ascending Order
#include<iostream>
using namespace std;

int main() {
    char arr[1000];
    int n;
    cout<<"Enter the total number of elements in the array: ";
    cin>>n;
    
    cout<<"Enter the elements of the array :";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i = n-1; i >= 0; i--)
    {
        bool swapped = 0;
        for(int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            swapped = 1;
            }
        }
        if(swapped == 0)
        break;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

//4.bubble sort in increasing order by bringing the smallest element to the front of the array
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
    
    for(int i = 0; i < n-1; i++)
    {
        bool swapped = 0;
        for(int j = n-1; j > i ; j--)
        {
            if(arr[j] < arr[j-1])
            {
            swap(arr[j],arr[j-1]);
            swapped = 1;
            }
        }
        cout<<"\nAfter Pass: "<< i + 1<<": ";
        for(int k = 0; k < n;k++)
        {
        cout<<arr[k]<<" ";
        }
        
        if(swapped == 0)
        {
            cout << "Array already sorted, stopping early.\n";
            break;
        }
    }
    cout<<"\n Final Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
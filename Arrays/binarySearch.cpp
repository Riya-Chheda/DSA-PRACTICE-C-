//1. Binary Search on Increasing order Array
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    //take start, mid, end - Iterative Approach
    int start = 0,end = n - 1, mid, step = 1;

    while(start <= end)
    {
        mid = (start + (end - start))/2;

        cout<<"Step : "<<step<<", Start : "<<start<<", End : "<<end<<", (arr[Mid] : "<<arr[mid]<<")"<<endl;
        //arr[mid] == key
        if(arr[mid] == key){
        cout<<" -->Match Found!\n";
        return mid;
        }
        //arr[mid] < key
        else if(arr[mid] < key)
        {
        //arr[mid] < key
        cout<<" --> arr[mid] < key, Searching right half\n";
        start = mid + 1;
        }
        else 
        {
        //arr[mid] > key
        cout<<" --->arr[mid] > key, searching Left half\n";
        end = mid - 1;
        }
        step++;
        }
    return -1;
    }

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
     
    int key;
    cout<<"Enter Key element to be searched : ";
    cin>>key;
    
    int result = BinarySearch(arr, n, key);
    if(result != -1)
    cout << "Element found at " << result << " Position";
    else
    cout << "Element not found";
    return 0;
};

//2. Binary Search on Decreasing order Array
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    //take start, mid, end - Iterative Approach
    int start = 0,end = n - 1, mid, step = 1;

    while(start <= end)
    {
        mid = (start + (end - start))/2;

        cout<<"Step : "<<step<<", Start : "<<start<<", End : "<<end<<", (arr[Mid] : "<<arr[mid]<<")"<<endl;
        //arr[mid] == key
        if(arr[mid] == key){
        cout<<" -->Match Found!\n";
        return mid;
        }
        //arr[mid] < key
        else if(arr[mid] < key)
        {
        //arr[mid] < key
        cout<<" --> arr[mid] < key, Searching left half\n";
        end = mid - 1;
        }
        else 
        {
        //arr[mid] > key
        cout<<" --->arr[mid] > key, searching right half\n";
        start = mid + 1;
        }
        step++;
        }
    return -1;
    }

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements of the array in Decreasing order: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     
    int key;
    cout<<"Enter Key element to be searched : ";
    cin>>key;
    
    int result = BinarySearch(arr, n, key);
    if(result != -1)
    cout << "Element found at " << result << " Position";
    else
    cout << "Element not found";
    return 0;
};


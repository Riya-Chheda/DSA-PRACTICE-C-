#include<iostream>
#include<vector>
using namespace std;

    int segregate0and1(vector<int> &arr, int n) {
        // code here
        int start = 0, end = n - 1;
        while(start < end)
        {
            if(arr[start] == 0)
            {
                start++;
            }
            else
            {
                if(arr[end] == 0)
                {
                    swap(arr[start],arr[end]);
                    start++, end--;
                }
                else
                end--;
            }
        }
        return 0;
    }

    int main() 
    {
        vector<int> arr(100);
        int n;
        cout<<"Enter total no. of elements in array : ";
        cin>>n;
        cout<<"Enter the elements of the array : ";
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        segregate0and1(arr, n);
        cout<<"Array after segregation : ";
        for(int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }
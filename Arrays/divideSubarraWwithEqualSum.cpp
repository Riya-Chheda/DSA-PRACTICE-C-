#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>& arr) 
{
    int n = arr.size();
    int total_sum = 0, sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }
    for(int i = 0; i < n-1; i++)
    {
        sum1 += arr[i];
        sum2 = total_sum - sum1;

        if(sum1 == sum2)
        {
        cout<<"Equal sum = "<<sum1<<endl;
        return 1;
        }
    }
    return 0;
}

int main()
{
      int n;
      cout<<"Enter the total number of elements in the array : ";
      cin>>n;
    
      vector<int> arr(n);
      cout<<"Enter the elements of the array : ";
      for(int i = 0; i < n; i++)
      {
        cin>>arr[i];
      }
      if(divide(arr))
      {
          cout<<"The array can be divided into two subarrays with equal sum"<<endl;
      }
      else
      {
          cout<<"The array cannot be divided into two subarrays with equal sum."<<endl;
      }
      return 0;
}

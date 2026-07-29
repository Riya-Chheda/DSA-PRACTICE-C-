#include<iostream>
using namespace std;

int countFreq(int arr[],int n, int target) {
        // code here
          int start = 0, end  = n-1, mid, first = -1, last = -1;
          // First Occurence
          while(start <= end)
          {
              mid = start + (end - start)/2;
              if(arr[mid] == target)
              {
                  first = mid;
                  end = mid - 1;
              }
              else if(arr[mid] < target)
              start = mid + 1;
              else
              end = mid - 1;
          };
          if(first == -1)
          return 0;
          //last occurence
          
          start = 0, end = n - 1;
    
          while(start <= end)
          {
              mid = start + (end - start)/2;
              if(arr[mid] == target)
              {
                  last = mid;
                  start = mid + 1;
              }
              else if(arr[mid] < target)
              start = mid + 1;
              else
              end = mid - 1;
          }
    return last - first + 1;

};
int main() {
    int nums[1000];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements of the array in Increasing order: ";
    for(int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
     
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    
    int result = countFreq(nums, n, target);

    cout << "Frequency of number in the array : " << result << endl;

    return 0;
};
   
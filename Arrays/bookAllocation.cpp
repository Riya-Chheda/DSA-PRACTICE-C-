#include<iostream>
#include<vector>
using namespace std;

bool(isValid(vector<int> &arr, int n, int students,int maxAllowedPages))//o(n)
{
int stud = 0, pages = 0;
for(int i = 0; i < n; i++)
{
    if(arr[i] > maxAllowedPages)//corner case if a single book has more pages than the max allowed pages
    return false;

    if(pages + arr[i] > maxAllowedPages)
    {
        stud++;
        pages = arr[i];
        if(stud >= students)
        return false;
    }
    else
    pages += arr[i];
}
};

int findPages(vector<int> &arr, int n, int students)//o(nlogn)
{
if(students > n)
    return -1;

//1. find the sum to calculate range of possible solutions
int sum = 0;
for(int i = 0; i < n; i++)//o(n)
{
    sum += arr[i];
}
int start = 0, end = sum, mid,ans = -1;//range of possible answers
//Applying Binary search
mid = start + (end-start)/2;
while(start <= end) // O(logRange)
{
    if(isValid(arr,n,students,mid))
    {
        ans = mid;
        end = mid - 1;
    }
    else
    start = mid + 1;
}
return ans;
};
//alternative approach


int main()
{
    int n;
    cout<<"Enter the number of books: ";
    cin>>n;
    vector<int> books(n);
    cout<<"Enter the pages in each book: ";
    for(int i=0; i<n; i++)
    {
        cin>>books[i];
    }
    cout<<"Enter the number of students: ";
    int students;
    cin>>students;

    cout<<"The minimum number of pages allocated to a student is: "<<findPages(books, n, students)<<endl;
};
/*
//alternative approach
class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int N = arr.size();
        
        if(k > N)
        return -1;
        
        long long start = 0,end = 0, mid , ans = -1;
        for(int i = 0; i < N; i++)
        {
            start = max(start, (long long)arr[i]);
            end += arr[i];
        }

        while(start <= end)
        {
            mid = start+(end-start)/2;
            long long pages = 0;
            int count = 1;
            
            for(int i = 0; i<N; i++)
            {
                pages += arr[i];
                if(pages > mid)
                {
                    count++;
                    pages = arr[i];
                }
            }
            if(count <= k)
            {
            ans = mid; 
            end = mid - 1;
            }
            else
            start = mid + 1;
        }
        return (int)ans;
    }
};*/
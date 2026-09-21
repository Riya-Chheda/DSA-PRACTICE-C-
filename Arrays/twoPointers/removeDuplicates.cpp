#include<iostream>
#include<vector>
using namespace std;

    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
        return 0;

        int i = 0;
        for(int j = 1; j < nums.size(); j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }

    int main()
    {
        int n;
        cout<<"Enter the total number of  elements of the array : ";
        cin>>n;
        vector<int> nums(n);
        cout<<"Enter the elements of the array : ";
        for(int i = 0; i < n; i++)
        {
            cin>>nums[i];
        }
        int k = removeDuplicates(nums);
        cout<<"The length of the array after removing duplicates is : "<<k<<endl;
        cout<<"The array after removing duplicates is : ";
        for(int i = 0; i < k; i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
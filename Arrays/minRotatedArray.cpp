#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1, mid, ans = nums[0];
        while(start <= end)
        {
            mid = start + (end-start)/2;
            //left side sorted check right side for smallest element
            if(nums[mid] >= nums[0])
            start = mid + 1;
            else
            {
            //right side sorted check left side for smallest element
            ans = nums[mid];
            end = mid - 1;
            }
        }
        return ans;
    };

int main() {
    int n;
    cout<<"Enter the number of elements: ";  
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin>>nums[i];
    }

    cout<<"The minimum element is: "<<findMin(nums)<<endl;
    return 0;
}
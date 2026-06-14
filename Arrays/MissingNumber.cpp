#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingnumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
    // sum of all array elements
        for(int i = 0; i < n; i++)
        sum += nums[i];
     // sum of n numbers
        int ans = (n*(n+1)/2);

        return ans - sum;
    }
};
    int main() {
    vector<int> nums = {1,2,5,3,0};

    Solution obj;
    cout<<obj.missingnumber(nums);

    return 0;
}


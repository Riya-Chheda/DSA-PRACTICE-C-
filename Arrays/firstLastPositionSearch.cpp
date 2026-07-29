#include<iostream>
using namespace std;

class Solution {
public:
    void searchRange(int nums[], int n, int target, int result[2]) {
        int start = 0, end = n - 1, mid, first = -1, last = -1;

        // ---- Step 1: find FIRST occurrence ----
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                first = mid;
                end = mid - 1;   // left side mein aur dhoondo (leftmost chahiye)
            }
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        // ---- Step 2: find LAST occurrence ----
        start = 0, end = n - 1;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                last = mid;
                start = mid + 1;  // right side mein aur dhoondo (rightmost chahiye)
            }
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        result[0] = first;
        result[1] = last;
    }
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
    
    int result[2];
    Solution sol;
    sol.searchRange(nums, n, target, result);

    cout << "First: " << result[0] << ", Last: " << result[1] << endl;

    return 0;
};
   
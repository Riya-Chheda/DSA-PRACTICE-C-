#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int start = 0, end = n - 1;

        while(start < end)
        {
            if(numbers[start] + numbers[end] == target)
            {
                ans.push_back(start + 1);
                ans.push_back(end + 1);
                return ans;
            }
            else if(numbers[start] + numbers[end] < target)
            start = start + 1;
            else
            end = end - 1;
        }
        return ans;
    }

int main()
{
    int n, target;
    cout << "Enter total no. of elements in array : ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements of the array : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target sum : ";
    cin >> target;

    vector<int> result = twoSum(arr, target);
    if(result.size() == 2)
        cout << "The indices of the two numbers are : " << result[0] << " and " << result[1] << endl;
    else
        cout << "No two numbers found that add up to the target." << endl;

    return 0;
}
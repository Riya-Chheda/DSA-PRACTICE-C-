//brute force method
#include<iostream>
#include<vector>
using namespace std;

int maxDifference(vector<int>& arr) {
    int n = arr.size();
    int maxDiff = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = arr[j] - arr[i];

            if (diff > maxDiff) {
                maxDiff = diff;
            }
        }
    }

    return maxDiff;
}

//optimal approach
int maxDifferenceOptimal(vector<int>& arr) {
    int n = arr.size();
    int curr_min = arr[0], max_diff = -1;
    for(int i = 0; i < n; i++)
    {
        int diff = arr[i] - curr_min;
        if(diff>max_diff)
        max_diff = diff;
        if(arr[i]<curr_min)
        {
            curr_min = arr[i];
        }
    }
    return max_diff;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int resultBruteForce = maxDifference(arr);
    cout << "Maximum difference (Brute Force): " << resultBruteForce << endl;

    int resultOptimal = maxDifferenceOptimal(arr);
    cout << "Maximum difference (Optimal): " << resultOptimal << endl;

    return 0;
}
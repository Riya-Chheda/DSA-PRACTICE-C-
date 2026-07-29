#include<iostream>
using namespace std;

int cuberoot(int x) {
    int start = 0, end = x,mid,ans;
    if(x < 2)
    return x;
        
    while(start <= end)
        {
            mid = start + (end - start)/2;
            if(mid*mid == x/mid)
            {
            return mid;
            break;
            }
            else if(mid*mid < x/mid)
            {
            ans = mid;
            start = mid + 1;
            }
            else
            {
            end = mid - 1;
            }
        }
        return ans;
    };

int main() {
    int n;
    cout<<"Enter the non negative integer x : ";
    cin>>n;

    int result= cuberoot(n);

    cout <<"Cube root of ("<<n<<") is : "<<result<<" ";

    return 0;
};
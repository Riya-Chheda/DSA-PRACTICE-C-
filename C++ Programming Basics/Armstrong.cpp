//hard problems
//1. covert char 'a' to 'A'
/* #include<iostream>
using namespace std;

char convert(char ch)
{
    char ans = ch - 'a' + 'A';
    return ans;
}

int main()
{
    char a;
    cout<<"enter your character:";
    cin>>a;
   cout<<convert(a);
}  */

//2. armstrong number
/* #include<iostream>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n = n/10;
    }
    return count;
}

bool Armstrong(int num, int digit)
{
    int n = num,rem, ans = 0;
    while(n)
    {
    rem = n % 10;
    n = n / 10;
    ans = ans + pow(rem,digit);
    }
    
    if(ans == num)
    return 1;
    else
    return 0;
}

int main()
{
    int a;
    cout<<"Enter Your Number : ";
    cin>>a;
    int digit = countDigit(a);

    cout<<digit<<endl;

    cout<<Armstrong(a,digit)<<endl;
} */

//3. trailing 0's in a factorial
/* #include<iostream>
using namespace std;

int trailingZeroes(int n)
{
    int count = 0;
    while(n>=5)
    {
        count = count + n/5;
        n = n/5;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of trailing zeros in " << n << "! is " << trailingZeroes(n) << endl;
    return 0;
} */

//4. no of spaces the bishop will move
/*#include<iostream>
using namespace std;
int bishop(int a, int b)
{
    int count = 0;
    count = count + min(8 - a, 8 - b);
    count = count + min(8 - a, b - 1);
    count = count + min(a - 1, b - 1);
    count  =count + min(a - 1, 8 - b);

    return count;
}
int main()
{
    int n,m;
    cout<<" enter your bishop position : ";
    cin>>n>>m;
    int total = bishop(m,n);
    cout<<total;

} */

// 5. count no of set bits
/* class Solution {
  public:
    int setBits(int n){
        int count = 0;
        
        while(n > 0){
            if(n % 2 == 1)
            count++;
        
            n = n/2;// Write Your Code here
        }
return count;
}
}; */

//6. Nim Game
/* class Solution {
public:
    bool canWinNim(int n) {
        if(n % 4 == 0)
        return 0;
        else
        return 1;
    }
}; */

//7. distribute items in a circle
/*class solution{
public:
int solve(int A, int B, int C) {
    int total = ((C + A - 2) % B + 1);
    return total;
}
}; */

//7. bit diiference calculation
/* You are given two numbers a and b. The task is to count the number of bits needed to be flipped to convert a to b.
Note : flipping of bit means inverting its value -- changing 1 to 0 and 0 to 1
 */
/*#include<iostream>
using namespace std;

class Solution {
  public:
    int countBitsFlip(int a, int b) {
        int x = a ^ b;
        int count = 0;
        
        while(x > 0){
            if(x % 2 == 1)
            count ++;
            
            x = x/2;
        }
        return count;
    }
}; 
int main()
{
    int m,n;
    cout<<"Enter number1 : ";
    cin>>m; 
    cout<<"Enter number2 : ";
    cin>>n;
    int ans = Solution().countBitsFlip(m,n);
    cout<<"Number of bits needed to be flipped to convert "<<m<<" to "<<n<<"ans is : "<<ans;
}*/
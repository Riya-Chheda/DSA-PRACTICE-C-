// 1. to print operators
// to check ideal temperature for swimming between 70 and 90
/* #include<iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"Enter Temperature in Fahrenheit:";
    cin>>temp;
    if(temp >= 70 && temp<=90)
    cout<<"yes";
    else
    cout<<"no";
    cout<<endl;
}
 */
//2. to check if number is even and positive
/* #include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number :";
    cin>>num;
    if(num % 2 == 0 && num > 0)
    cout<<"yes";
    else
    cout<<"no";
    cout<<endl;
}  */

//3. to check if a person is teenager between ideal age 13 to 19
/* #include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age >= 13 && age <= 19)
    cout<<"yes teenager";
    else
    cout<<"not a teeanger";
    cout<<endl;
} */

//4. check if a > b or a > c
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;;
    cout<<"Enter Value of A : ";
    cin>>a;
    cout<<"Enter Value of B : ";
    cin>>b;
    cout<<"Enter Value of C : ";
    cin>>c;

    if(a > b || a > c)
    cout<<"yes";
    else
    cout<<"no";
    cout<<endl;
} */

//5. evaluate expression and find value with order of precedence of operators
/* #include<iostream>
using namespace std;
int main()
{
    long int n1,n2,n3,n4;
    n1 = 2*3-48==5/4*6;
    n2 = 6<<2-4*8/2;
    n3 = 5>4<3/2-8%4+5;
    n4 = 14-8+92>>2+70;
    
    cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<" ";
    cout<<endl;
} */

// while loop lec8 27/02/2026

// 1. to print even numbers from 1 to n
/* #include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int i = 1;
    while(i<= num)
    {
        if(i % 2 == 0) // for odd( i % 2 == 1)
        cout<<i<<" ";
        i++;
        cout<<endl;
    }
} */

//2. to print multiplication of a number
/* #include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int i = 1;
    int prod;
    while(i <= 10)
    {  
        prod = num*i;
        cout<<prod<<" ";
        i++;
        cout<<endl;
    }
} */
// do while loops
//3. 
/* #include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int i = 1; //initialize
    int sum = 0;
    do
    {
        sum = sum + i ; // for odd( i % 2 == 1)
        cout<<sum<<" "; // update
        i++;
        cout<<endl;
    }
    while(i <= num); // break
} */

//4.
/* #include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;

    int i = 1;
    do
    {
        cout<<i<<endl;
        i++;

    } while(i<=num);
} */

// break and continue statements
/* #include<iostream>
using namespace std;
int main()
{
 for(int i = 1; i <= 10; i++)
 {
    if(i==4)
    break; 

    cout<<i<<" ";
 }
}
 */

 //continue
/* #include<iostream>
using namespace std;
int main()
{
 for(int i = 1; i <= 10; i++)
 {
    if(i==4)
    continue; 

    cout<<i<<" ";
 }
}
 */

// switch
/* #include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;

    switch(num)
    {
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"not a valid day";
    }
} */

//scope of a variable
/* #include<iostream>
using namespace std;
int main()
{

    int n = 10;
    int i = 30;
    {
        if(i==30)   //same block cannot have same variables name
        {
            int n = 20;
            cout<<n<<" ";
            cout<<endl;
        }
     cout<<n;
    }
} */
//homework questions
//1. while loop print even numbers from 1 to n:
/* #include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;
      
    int i = 1;
    while(i<=num)
    {
        if(i%2 == 0)
        cout<<i<<" ";
        i++;
    }
} */
//do while loop
/* #include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number    : ";
    cin>>num;
      
    int i = 1;
    do
    {
        if(i%2 == 0)
        cout<<i<<" ";
        i++;
    }while(i <= num);
} */

//2.factorial of a number
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number n: ";
    cin>>n;
      
    int i = 1;
    int fact = 1;
    while(i<=n)
    {
        fact = fact*i;
        cout<<fact<<" ";
        i++;
    }
} */
//3. number not divisible by 3 & 5
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number : ";
    cin>>n;
      
    int i = 1;

    while(i<=n)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
        i++;
        continue;
        }

    cout<<i<<" ";
    i++;
    }
    return 0;;
}  
 */
//4. print day number wise 
/* #include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;

    switch(num)
    {
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;
    }
}  */
//5. to print characters from a to z
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number n: ";
    cin>>n;
      
    int i = 1;
    while(i<=n)
    {
        char ch = 'a' + (i-1);
        cout<<ch<<" ";
        i++;
    }
} */
//6. find if it is prime or not, use a while loop
//method1
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number : ";
    cin>>n;

    if(n < 2)
    {
        cout<<"not prime number";
        return 0;
    }

    int i = 2;

    while(i < n)
    {
        if(n % i == 0)
        {
            cout<<"Not a prime number";
            break;
        }
        i++;
    }
    if(i == n)
    cout<<"prime number found";
}  */ 
//method2
/* #include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your number : ";
    cin>>n;

    if(n < 2)
    {
        cout<<"Not a prime number";
        return 0;
    }

    int i = 2;
    bool isPrime = true;

    while(i < n)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
        i++;
    }

    if(isPrime)
        cout<<"Prime number found";
    else
        cout<<"Not a prime number";

    return 0;
} */

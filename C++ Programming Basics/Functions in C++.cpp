//functions in c++
//1. to find prime and factorial for a,b,b-a
/* #include<iostream>
using namespace std;

bool isPrime(int n)
{
    int i;
    if(n <= 1)
    return 0;

    for(i=2;i*i<n;i++)
    {
    if(n%i == 0)
    return 0;
    }
return 1;
}

int isFact(int n)
{
    int fact = 1,i;
    for(i = 1; i<= n; i++)
    {
    fact = fact*i;
    }
return fact;
}

int main()
{
int a,b,c;
cout<<"enter value of A : ";
cin>>a;
cout<<"enter value of B : ";
cin>>b;
c = b-a;
cout<<isPrime(a)<<endl;
cout<<isFact(a)<<endl;
cout<<isFact(b)<<endl;
cout<<isPrime(b)<<endl;
cout<<isPrime(b-a)<<endl;
cout<<isFact(b-a)<<endl;  
}  */

//2.sum of 2 numbers
/* #include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
 void fun()
{
  cout<<"main kuch bhi return nhi karta";
}

int main()
{
    int a,b;
    cout<<"Enter number1 : ";
    cin>>a;
    cout<<"Enter Number2 : ";
    cin>>b;

    cout<<"sum of a and b is : "<<sum(a,b)<<endl;
    fun();
} */

//swap 2 numbers
/* #include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int m,n;
    cout<<"enter 1st number : ";
    cin>>m;
    cout<<"enter 2nd number : ";
    cin>>n;
    swap(m,n);
    cout<<m<<n;
    cout<<endl;
}
 */

//functions H/W Problem
//1. find cube of a number
/* #include<iostream>
using namespace std;

void cube(int n)
{
    n = n*n*n;
    cout<<n<<" ";
}
int main()
{
    int a;
    cout<<"enter your number:";
    cin>>a;
    cout<<"the cube is: ";
    cube(a);
}
 */

// 2.reverse of a number n using function
/* #include<iostream>
using namespace std;

void reverse(int n)
{
    int rem,ans = 0;
    for(;n > 0; n /= 10)
    {
        rem = n % 10;
        ans = rem + 10 * ans;
    }
    cout<<ans;;
}
int main()
{
    int a;
    cout<<"enter your number:";
    cin>>a;

    if(a < -5001 || a > 5001)
    {
        cout<<"number out of range";
        return 0;
    }
    cout<<"the reverse of "<<a<<" is : ";
    reverse(a);
} */

//3. exchange values of 3 variables
/* #include<iostream>
using namespace std;

void exchange(int a, int b, int c)
{
    int temp;
    temp = a;
    a = c;
    c = b;
    b = temp; 
    cout<<a<<" "<<b<<" "<<c;
}
int main()
{
    int a,b,c;
    cout<<"enter your  number 1:";
    cin>>a;
    cout<<"enter your  number 2:";
    cin>>b;
    cout<<"enter your  number 3:";
    cin>>c;
    exchange(a,b,c);
    cout<<endl;
} */

//4.swap 2 variables without using other variable
/* #include<iostream>
using namespace std;

void swap(int a, int b)
{
    a = a*b;
    b = a/b;
    a = a/b;
    cout<<a<<" "<<b<<" ";
}
int main()
{
    int a,b;
    cout<<"enter your  number 1:";
    cin>>a;
    cout<<"enter your  number 2:";
    cin>>b;
    if(a,b < -10000 || a,b > 10000)
    {
    cout<<"invalid range";
    return 0;
    }
    swap(a,b);
    cout<<endl;
} */

//. to print "people stay away n times" 
/* #include<iostream>
using namespace std;

void print(int n)
{
 cout<<"People stay away"<<endl;
}
int main()
{
    int a,i;
    cout<<"enter your number:";
    cin>>a;

    for(i = 1;i <= a;i++)
    {
        print(a);
    }
}  */

//6. to find combination nCr
/* #include<iostream>
using namespace std;

int fact(int p)
{
 //to find factorial of a number
 int fact = 1,i;
 for(i = 1; i <= p; i++)
 {
 fact = fact * i;
 }
 return fact;
}
int main()
{
    int n,r,i;
    cout<<"enter total number of objects :";
    cin>>n;
    cout<<"enter no of objects to be selected :";
    cin>>r;
    int n1 = fact(n);
    int r1 = fact(r);
    int nr = fact(n-r);
    int combi = n1/(r1*nr);
    cout<<"the combination result is : "<<combi<<" ";
} */
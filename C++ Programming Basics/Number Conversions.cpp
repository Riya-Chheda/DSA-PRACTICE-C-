// data conversions
//1. DECIMAL TO BINARY
/* #include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number : ";
cin>>n;

int rem, ans = 0, mul = 1,i;

while(n > 0)
{
    rem = n %  2; //remainder  biwise operator can also be used here '&'1
    n = n/2; //quotient   right shift can be used here '>>'1'
    ans = rem*mul+ans; //answer
    mul = mul * 10;  //multiply
}
cout<<"DECIMAL TO BINARY CONVERSION OF "<<n<<" is : "<<ans<<" ";
} */

//2. BINARY TO DECIMAL CONVERSION
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int rem,ans = 0,mul = 1,i;
    while(n>0)
    {
        rem = n % 10; //remainder
        n = n / 10; //quotient
        ans = rem * mul + ans; //ans
        mul = mul * 2; //multiply power of base 
    }
    cout<<"BINARY TO DECIMAL CONVERSION OF "<<n<<" IS : "<<ans<<endl;
}
   */ 
//. binary to decimal using for loop
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int rem,ans = 0,mul = 1;

    for(;n > 0; n /= 10)
    {
        rem = n % 10; //remainder
        ans = rem * mul + ans; //ans
        mul = mul * 2; //multiply power of base 
    }
    cout<<"BINARY TO DECIMAL CONVERSION OF "<<n<<" IS : "<<ans<<endl;
} */
// decimal to binary using for loop
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int rem,ans = 0,mul = 1;

    for(;n > 0; n /= 2)
    {
        rem = n % 2; //remainder
        ans = rem * mul + ans; //ans
        mul = mul * 10; //multiply power of base 
    }
    cout<<"DECIMAL TO BINARY CONVERSION OF "<<n<<" IS : "<<ans<<endl;
} */

//3.decimal to octal conversion
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int rem,ans = 0,mul = 1;

    for(;n > 0; n /= 8)
    {
        rem = n % 8;
        ans = rem * mul + ans;
        mul =  mul * 10;
    }
    cout<<"DECIMAL TO OCTAL CONVERSION OF "<<n<<" IS : "<<ans<<endl;
}
  */

//4. OCTAL TO DECIMAL CONVERSION
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int rem,ans = 0,mul = 1;

    for(;n > 0; n /= 10)
    {
        rem = n % 10;
        ans = rem * mul + ans;
        mul =  mul * 8;
    }
    cout<<"OCTAL TO DECIMAL CONVERSION OF "<<n<<" IS : "<<ans<<endl;
} */

//5. BINARY TO OCTAL CONVERSION
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int rem,ans = 0,mul = 1;

    for(;n > 0; n /= 8)
    {
        rem = n % 8;
        ans = rem * mul + ans;
        mul =  mul * 2;
    }
    cout<<"BINARY TO OCTAL CONVERSION OF "<<n<<" IS : "<<ans<<endl;
}
 */
//6. BINARY TO OCTAL CONVERSION - VIA DECIMAL
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int rem,ans = 0,mul = 1;
    {

    for(;n > 0; n /= 10)
    {
        rem = n % 10; //remainder
        ans = rem * mul + ans; //ans
        mul = mul * 2; //multiply power of base 
    }
    cout<<"BINARY TO DECIMAL CONVERSION OF "<<n<<" IS : "<<ans<<endl;
    }
    int n1 = ans;
    int answ = 0;;
    int multi = 1,rema;
//decimal to octal conversion:
    for(;n1 > 0; n1 /= 8)
    {
        rema = n1 % 8; //remainder
        answ = rema * multi + answ; //ans
        multi = multi * 10; //multiply power of base 
    }
    cout<<"BINARY TO OCTAL CONVERSION OF :"<<n<<" IS : "<<answ<<endl;
} */

//7. OCTAL TO BINARY CONVERSION
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int rem,ans = 0,mul = 1;
    {

    for(;n > 0; n /= 10)
    {
        rem = n % 10; //remainder
        ans = rem * mul + ans; //ans
        mul = mul * 8; //multiply power of base 
    }
    cout<<"OCTAL TO DECIMAL CONVERSION OF "<<n<<" IS : "<<ans<<endl;
    }
    int n1 = ans;
    int answ = 0;;
    int multi = 1,rema;
//decimal to BINARY conversion:
    for(;n1 > 0; n1 /= 2)
    {
        rema = n1 % 2; //remainder
        answ = rema * multi + answ; //ans
        multi = multi * 10; //multiply power of base 
    }
    cout<<"OCTAL TO BINARY CONVERSION OF :"<<n<<" IS : "<<answ<<endl;
} */

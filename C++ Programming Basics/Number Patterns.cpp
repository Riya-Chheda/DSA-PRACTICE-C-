// to print days of week in numbers
/* #include <iostream>
using namespace std;

int main()
{
    int n1;

    cout << "Enter your number: ";
    cin >> n1;

    if(n1 == 1)
        cout << "Monday" << endl;
    else if(n1 == 2)
        cout << "Tuesday" << endl;
    else if(n1 == 3)
        cout << "Wednesday" << endl;
    else if(n1 == 4)
        cout << "Thursday" << endl;
    else if(n1 == 5)
        cout << "Friday" << endl;
    else if(n1 == 6)
        cout << "Saturday" << endl;
    else if(n1 == 7)
        cout << "Sunday" << endl;
    else
        cout << "Not a valid number";

    return 0;
}
 */
//nested loops
//pattern printing
//1. print * pattern in equal number of rows and colums
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int row,col;
    for(row = 1; row <= n; row++)
    {
        for(col=1; col <= n; col++)
        {
            cout<<"*"<<" ";
        }
    cout<<endl;
    }
} */

//for different number of rows and columns:
/* #include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter Number1 : ";
    cin>>n1;
    cout<<"Enter number2 :";
    cin>>n2;

    int row,col;
    for(row = 1; row <= n1; row++)
    {
        for(col=1; col <= n2; col++)
        {
            cout<<"$"<<" ";
        }
    cout<<endl;
    }
}  */

// to print the pattern rowwise 11111 22222 33333 44444 55555
/* #include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter Number1 : ";
    cin>>n1;
    cout<<"Enter number2 : ";
    cin>>n2;

    int row,col;
    for(row = 1; row <= n1; row++)
    {
        for(col=1; col <= n2; col++)// prints the inner elements of the row 
        {
         cout<<row<<" ";
        }
    cout<<endl;
    }
} */

// to print the pattern column wise 12345 12345 12345 12345 12345
/* #include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter Number1 : ";
    cin>>n1;
    cout<<"Enter number2 : ";
    cin>>n2;

    int row,col;
    for(row = 1; row <= n1; row++)
    {
        for(col=1; col <= n2; col++)// prints the inner elements of the row 
        {
         cout<<col<<" ";
        }
    cout<<endl;
    }
} */
// to print the pattern column wise 54321 54321 54321 54321 54321
/* #include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter Number1 m : ";
    cin>>n1;
    cout<<"Enter number2 n : ";
    cin>>n2;

    int row,col;
    for(row = 1; row <= n1; row++)
    {
        for(col = n1; col >= 1; col--)// prints the inner elements of the row 
        {
         cout<<col<<" ";
        }
    cout<<endl;
    }
}  */

// to print the pattern column wise 55555 44444 33333 22222 11111
/* #include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter Number1 m : ";
    cin>>n1;
    cout<<"Enter number2 n : ";
    cin>>n2;

    int row,col;
    for(row = n1; row >= 1; row--)
    {
        for(col = 1; col <= n1; col++)// prints the inner elements of the row 
        {
         cout<<row<<" ";
        }
    cout<<endl;
    }
}  */

// to print the square of elements in columns 1 4 9 16 25   1 4 9 16 25   1 4 9 16 25   1 4 9 16 25    1 4 9 16 25
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter Number 1: ";
    cin>>n1;
    int n2;
    cout<<"Enter Number 2: ";
    cin>>n2;
    int row,col;

    for(row = 1; row <= n1; row++)
    {
        for(col=1; col <= n2; col++)
        { 
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
}
 */
//
// to print the square of elements in rows 11111 44444 99999 1616161616  2525252525
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter Number 1: ";
    cin>>n1;
    int n2;
    cout<<"Enter Number 2: ";
    cin>>n2;
    int row,col;

    for(row = 1; row <= n1; row++)
    {
        for(col=1; col <= n2; col++)
        { 
            cout<<row*row<<" ";
        }
        cout<<endl;
    }
}
 */
// to print cube ofelements in column
// to print the square of elements in columns 1 8 27 64  1 8 27 64  1 8 27 64  1 8 27 64  1 8 27 64
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter Number 1: ";
    cin>>n1;
    int n2;
    cout<<"Enter Number 2: ";
    cin>>n2;
    int row,col;

    for(row = 1; row <= n1; row++)
    {
        for(col=1; col <= n2; col++)
        { 
            cout<<col*col*col<<" ";
        }
        cout<<endl;
    }
} */

// to print pattern aaaaa bbbbbb cccccc dddddd eeeeee
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter char 1: ";
    cin>>n1;
    int n2;
    cout<<"Enter char 2: ";
    cin>>n2;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        char name = 'a' + (row - 1);
        for(col = 1; col <= n2; col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
} */

// to print pattern abcde abcde abcde abcde abcde - method1
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter Number1:";
    cin>>n1;
    char n2;
    cout<<"Enter character:";
    cin>>n2;
    int row;
    char col;

    for(row = 1; row <= n1; row++)
    {
        for(col = 'a'; col<= n2; col++)
        {
         cout<<col<<" ";
        }
        cout<<endl;
    }

} */
// method 2
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter char 1: ";
    cin>>n1;
    int n2;
    cout<<"Enter char 2: ";
    cin>>n2;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = 1; col <= n2; col++)
        {
            char name = 'a';
            cout<<char(name + (col - 1)) <<" ";
        }
        cout<<endl;
    }
} */

// to print pattern 1 2 3 4 5  6 7 8 9 10  11 12 13 14 15  16 17 18 19 20  21 22 23 24 25 - method 1
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int n2;
    cout<<"Enter number 2: ";
    cin>>n2;
    int row,col,count = 1;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = 1; col <= n2; col++)
        {
            cout<<count<<" ";
            count = count + 1;
        }
        cout<<endl;
    }
} */
//method 2
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int n2;
    cout<<"Enter number 2: ";
    cin>>n2;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = 1; col <= n2; col++)
        {
            cout<<((row - 1)*5 + col)<<" ";
        }
        cout<<endl;
    }
} */
//homework problems
//to print pattern 44444 44444 44444 44444 44444
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter no. of rows : ";
    cin>>n1;
    int n2;
    cout<<"Enter no. of columns : ";
    cin>>n2;
    int count;
    cout<<"Enter the number to be printed :";
    cin>>count;

    int row,col;
    for(row =1; row <= n1; row++)
    {
        for(col = 1; col <= n2; col++)
        {
            cout<<count<<" ";
        }
        cout<<endl;
    }
}; */

//to print pattern 1 4 9 16 25
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int n2;
    cout<<"Enter number 2: ";
    cin>>n2;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = 1; col <= n2; col++)
        {
            cout<<(col * col)<<" ";
        }
        cout<<endl;
    }
} */

//to print pattern 1 8 27 64 125 216
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int n2;
    cout<<"Enter number 2: ";
    cin>>n2;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = 1; col <= n2; col++)
        {
            cout<<(col*col*col)<<" ";
        }
        cout<<endl;
    }
} */

//to print pattern FGHIK FGHIK FGHIK FGHIK FGHIK
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    char char1;
    cout<<"Enter first character : ";
    cin>>char1;
    char char2;
    cout<<"Enter last character : ";
    cin>>char2;
    int row;
    char col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = char1; col <= char2; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
} */
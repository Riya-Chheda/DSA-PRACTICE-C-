//pattern printing
// 1. to print * ** *** **** ***** ******
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}  */

//2. pattern 1  1 2  1 2 3   1 2 3 4   1 2 3 4 5 
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
} */

//3. pattern 1 22 333 4444 55555
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
} */

//4. to print 1 21 321 4321 54321 
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = row; col >= 1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}; */

//5. to print a bb ccc dddd eeeee
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"enter no. of rows n : ";
    cin>>n1;
     int row,col;
     for(row = 1;row<=n1 ; row++)
     {
        char alp = 'a' + (row - 1);
        for(col = 1; col<= row; col++)
        {
            cout<<alp<<" ";
        }
        cout<<endl;
     }
} */

//6.print pattern ***** **** *** ** *-method1
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int row,col;

    for(row = 1; row <= n1 ; row++)
    {
        for(col = 1; col <= 5-(row - 1); col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
};  */
//method 2
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int row,col;

    for(row = n1; row >= 1 ; row--) 
    {
        for(col = 1; col <= row; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
};  */

//7. to print pattern  12345 1234 123 12 1 - method1
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number 1: ";
    cin>>n1;
    int row,col;

    for(row = 1; row <= n1 ; row++) 
    {
        for(col = 1; col <= 5-(row - 1); col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
};  */
//method 2
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number : ";
    cin>>n1;
    int row,col;

    for(row = n1; row >= 1 ; row--) 
    {
        for(col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}; 
 */
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number n: ";
    cin>>n1;
    int row,col;

    for(row = 1; row <= n1 ; row++) 
    {
        for(col = n1; col >= (5-(row-1)); col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
};  */
// HOMEWORK PROBLEMS
// to print A AB ABC ABCD ABCDE 
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    int row,col;
    for(row = 1; row <= n;row++)
    {
        for(col = 1; col <= row; col++)
        {
            char name = 'A' + (col - 1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
} */
// To print 10   10 11   10 11 12   10 11 12 13   10 11 12 13 14
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"enter number1 : ";
    cin>>n1;
    int n2;
    cout<<"enter number1 : ";
    cin>>n2;
    int row,col;
    for(row = n1; row <= n2;row++)
    {
        for(col = n1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
} */
// to print ABCD  ABC  AB  A
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"enter number1 m : ";
    cin>>n1;
    int row,col;
    for(row = 1; row <= n1;row++)
    {
        for(col = 1; col <= (n1-(row-1)); col++)
        {
            char name = 'A' + (col - 1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}  */
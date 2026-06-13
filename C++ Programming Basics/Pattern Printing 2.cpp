//1. to print pattern ***** **** *** ** *
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int  row,col;
    for(row =1 ; row <= n; row++)
    {
        for(col=1; col<= (n - row); col++)
        {
        cout<<"  ";
        }
        for(col = 1; col<= row; col++)
        {
            cout<<"* ";
        }
     cout<<endl;
    }
} */
 

//2. to print pattern 1 22 333 4444 55555
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int  row,col;
    for(row =1 ; row <= n; row++)
    {
        for(col=1; col<= (n - row); col++)
        {
        cout<<"  ";
        }
        for(col = 1; col<= row; col++)
        {
            cout<<row<<" ";
        }
     cout<<endl;
    }
} */

//3  to print pattern 1 12 123 1234 12345
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int  row,col;
    for(row = 1 ; row <= n; row++)
    {
        for(col=1; col<= (n - row); col++)
        {
        cout<<"  ";
        }
        for(col = 1; col<= row; col++)
        {
            cout<<col<<" ";
        }
     cout<<endl;
    }
} */

//4. to print pattern A AB ABC ABCD ABCDE
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int  row,col;
    for(row =1 ; row <= n; row++)
    {
        for(col=1; col<= (n - row); col++)
        {
        cout<<"  ";
        }
        for(col = 1; col  <= row; col++)// method 2 for(char name = 'A ; name <= 'A'+(row - 1); name++)
        {
            char name = 'A' + (col - 1);
            cout<<name<<" ";
        }
     cout<<endl;
    }
} */

//5. to print pattern 54321 4321 321 21 1
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int  row,col;
    for(row = 1 ; row <= n; row++)
    {
        for(col=1; col<= (n - row); col++)
        {
        cout<<"  ";
        }
        for(col = row; col>= 1; col--)
        {
            cout<<col<<" ";
        }
     cout<<endl;
    }
} */

// 6. to print pattern A BB CCC DDDD EEEE
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int  row,col;
    for(row = 1 ; row <= n; row++)
    {
        for(col=1; col<= (n - row); col++)
        {
        cout<<"  ";
        }
        for(col = 1; col<= row; col++)
        {
            char name = 'A' + (row - 1);
            cout<<name<<" ";
        }
     cout<<endl;
    }
} */

// 7. to print pattern 5 54 543 5432 54321
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int  row,col;
    for(row = 1 ; row <= n; row++)
    {
        for(col=1; col<= (n - row); col++)
        {
        cout<<"  ";
        }
        for(col = n; col >= (n-(row - 1)) ; col--)
        {
            cout<<col<<" ";
        }
     cout<<endl;
    }
} */

//8. to print pattern E ED EDC EDCB EDCBA 
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number of rows : ";
    cin>>n1;
    
    int  row,col;
    char name;
    cout<<"Enter output character : ";
    cin>>name;

    for(row = 1 ; row <= n1; row++)
    {
        for(col=1; col<= (n1 - row); col++)
        {
        cout<<"  ";
        }
        for(col = 1; col<= row; col++)
        {
            char alp = name - (col - 1);
            cout<<alp<<" ";
        }
     cout<<endl;
    }
}  */
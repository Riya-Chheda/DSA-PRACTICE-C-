//1. print pattern * *** ***** ******* *********
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    int row,col;
    for(row = 1; row<= n; row++ )
    {
        for(col = 1; col <= 5-row ;col++)
        {
            cout<<"  "; 
        }
        for(col = 1; col <= 2*row-1 ;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
} */

//2. print pattern 1 121 1231 1234321 123454321
/* #include<iostream> 
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    int row,col;
    for(row = 1; row<= n; row++ )
    {
        for(col = 1; col <= n-row ;col++)
        {
            cout<<"  "; 
        }
        for(col = 1; col <= row ;col++)
        {
            cout<<col<<" ";
        }
        for(col= row - 1; col >= 1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
} */

//3. to print patern ********* ******* ***** *** *
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    int row,col;

    for(row = n; row >= 1; row--)
    {
        for(col = 1; col <= ((2*n-1)-row) ;col++)
        {
            cout<<"  "; 
        }
        for(col = 1; col <= 2*row - 1 ;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
          * * * * * * * * * * * 
            * * * * * * * * * 
              * * * * * * * 
                * * * * * 
                  * * * 
                    *             */

//4. to print Pattern   
/*  #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of rows : ";                                           
    cin>>n;
    int row,col;

    for(row = n; row>=1; row--)
    {
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        for(col = 1; col<=(2*n-2*row) ;col++)
        {
            cout<<"  ";
        }
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        cout<<endl;
    }


    for(row = 1; row<=n; row++)
    {
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        for(col = 1; col<=(2*n-2*row) ;col++)
        {
            cout<<"  ";
        }
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        cout<<endl;
    };


}
enter no. of rows : 4
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 
*             * 
* *         * * 
* * *     * * * 
* * * * * * * *  */

//5.to print pattern 
/* /* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of rows : ";                                           
    cin>>n;
    int row,col;

    for(row = 1; row<=n; row++)
    {
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        for(col = 1; col<=(2*n-2*row) ;col++)
        {
            cout<<"  ";
        }
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        cout<<endl;
    }
    for(row = n - 1; row>=1; row--)
    {
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        for(col = 1; col<=(2*n-2*row) ;col++)
        {
            cout<<"  ";
        }
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        cout<<endl;
    }
} 
     enter no. of rows : 5
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * */

//6. to print pattern 
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of rows : ";                                           
    cin>>n;
    int row,col;

    for(row = 1; row<=n; row++)
    {
        for(col = 1; col<=(n-row) ;col++)
        {
            cout<<" ";
        }
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        cout<<endl;
    }
    
    for(row = n; row>=1; row--)
    {
        for(col = 1; col<=(n-row) ;col++)
        {
            cout<<" ";
        }
        for(col = 1; col<=row ;col++)
        {
            cout<<"*"<<" "; 
        }
        cout<<endl;
    }
}
enter no. of rows : 4
   * 
  * * 
 * * * 
* * * * 
* * * * 
 * * * 
  * * 
   * */
// homework problems
//1. to print
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number of rows : ";
    cin>>n1;
    int row,col;

    for(row = 1; row <= n1; row++)
    {
        for(col = 1; col <=  (2*n1 - 1 )-row; col++)
        {
            cout<<" ";
        }
        for(col = 1; col <= row; col++)
        {
            cout<<"*"<<" ";
        }
    cout<<endl;
    }
}
Enter number of rows : 6
          * 
         * * 
        * * * 
       * * * * 
      * * * * * 
     * * * * * * */

//2.to print pattern
/* #include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter number of rows : ";
    cin>>n1;
    int row,col;

    for(row = 1; row <= n1; row++)
    {
        for(col = 1; col <=  (2*n1 - 1 )-row; col++)
        {
            cout<<"  ";
        }
        for(col = 1; col <= 2*row-1; col++)
        {
            cout<<col <<" ";
        }
    cout<<endl;
    }
}
Enter number of rows : 5
                1 
              1 2 3 
            1 2 3 4 5 
          1 2 3 4 5 6 7 
        1 2 3 4 5 6 7 8 9  */

// 3. to print
/*  #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    int row,col;
    char alp;
    cout<<"enter character :";
    cin>>alp;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col<= n - row; col++)
        {
            cout<<"  ";
        }
        for(col = 1; col<= row; col++)
        {
            char name = alp + (col - 1);
            cout<<name<<" ";
        }
        for(col = row - 1; col >= 1; col--)
        {
            char name = alp + (col - 1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}
enter no. of rows : 6
enter character :A
          A 
        A B A 
      A B C B A 
    A B C D C B A 
  A B C D E D C B A 
A B C D E F E D C B A  */
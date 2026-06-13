// 2 nos are given ,print the bigger number, both the numbers cant be same
/* #include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter number1 : ";
    cin>>a;
    cout<<"Enter Number2 : ";
    cin>>b;

    if(a == b)
    cout<<"Both the numbers cant be same";
    else if(a>b)
    {
    cout<<"A is greater"<<endl;
    }
    else
    {
    cout<<"B is greater"<<endl;
    }
}; */


 // calculate age of a person
/*  #include<iostream>
 using namespace std;
 int main()
 {
    int  age;
    cout<<"Enter Age:";
    cin>>age;
    if(age <= 12)
    cout<<"Kid"<<endl;
    else if(age <= 18)
    cout<<"Teenager"<<endl;
    else
    cout<<"Adult"<<endl;
 } */

 // print months serially 
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    if(n == 1)
    cout<<"Jan"<<endl;
    else if(n == 2)
    cout<<"feb"<<endl;
    else if(n == 3)
    cout<<"march"<<endl;
    else if(n == 4)
    cout<<"april"<<endl;
    else if(n == 5)
    cout<<"may"<<endl;
    else if(n == 6)
    cout<<"june"<<endl;
    else if(n == 7)
    cout<<"july"<<endl;
    else if(n == 8)
    cout<<"august"<<endl;
    else if(n == 9)
    cout<<"september"<<endl;
    else if(n == 10)
    cout<<"october"<<endl;
    else if(n == 11)
    cout<<"november"<<endl;
    else if(n == 12)
    cout<<"december"<<endl;
    else
    cout<<"enter a valid number";
}
 */

 //Ticket Price Counter
/*  #include<iostream>
 using namespace std;
 int main()
  {
    int age;
    cout<<"Enter age : ";
    cin>>age;
    if( age <= 12 )
    cout<<"Eligible for Discount :)"<<endl;
    else if( age >= 65 )
    cout<<"Eligible for Discount :)"<<endl;
    else
    cout<<"Paisa Bhar re chup-chap :|"<<endl;

  } */
// for loop

//print india will win the world cup 23 times
/* #include<iostream>
 using namespace std;
 int main()
  {
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
     cout<<"India Will Win the World Cup"<<endl;
    }
};
 */
//print odd numbers from 1 to n
/* #include<iostream>
 using namespace std;
 int main()
  {
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    for(int i = 1; i <= n; i+=2)
    {
     cout<<i<<endl;
    }
}; */
/* #include<iostream>
 using namespace std;
 int main()
  {
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    for(int i = 1; i <= n; i+=1)
    {
        if(i%2==1)
        {
            cout<<i<<endl;
        }
    }
}; */

 // print all numbers divisible by 4
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    for( int i = 1; i <= n; i+=1)
    {
        cout << "4 * " << i << " = " << 4 * i << endl << endl;
       }
    }; */

// to print alphabets from a to z
/* #include<iostream>
using namespace std;

int main()
{
  char name,z;
  
  for(char name = 'p'; name <= 'z'; name+=1)
  {
    cout<<name<<"  ";
  }
}; */

//to print numbers in reverse order
/* #include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter Number : ";
cin >> a;
for(int i = a; i >= 1; i--)
{
  cout<<i<<" ";
}
} */

// to print  number from 1 to 100 but with a jump of 4 between them
/* #include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Number:";
  cin>>n;
  for(int i = 1; i <= n; i += 3)
  {
    cout<< i <<" ";
  }

}
 */

// to print multiplication table of any number
/* #include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter Number : ";
cin>>n;
for(int i = 1; i <= 12; i++)
{
  cout<<n<<"*"<<i<<"="<<n*i<<"  ";
}
}; */

// to print power of a number
/* #include<iostream>
using namespace std;
int main()
{
int n,pow,res;
cout<<"Enter Number : ";
cin>>n;
cout<<"Enter The Power :";
cin>>pow;

res = n;
for(int i = 1; i < pow; i++)
{
  res = res*n;
}
cout<<res;
}; */

/* //sum of n natural numbers
#include<iostream>
using namespace std;
int main()
{
  int n,sum = 0;
  cout<<"Enter Number : ";
  cin>>n;
  for(int i = 1; i <= n; i++)
  {
    sum = i + sum;
  }
  cout<<"sum of n natural numbers is : "<<sum<<endl;
}; */


// sum of squares of n natural numbers
/* #include<iostream>
using namespace std;
int main()
{
  int n,sum = 0;
  cout<<"Enter Number : ";
  cin>>n;
  for(int i = 1; i <= n; i++)
  {
    sum = (i*i) + sum;
  }
  cout<<"sum of squares of n natural numbers is : "<<sum<<endl;
}; */


// find factorial of a number
/* #include<iostream>
using namespace std;
int main()
{
  int n,fact = 1;
  cout<<"Enter Number : ";
  cin>>n;
  for(int i = 1; i <= n; i++)
  {
    fact = i *  fact;
  }
  cout<<"factorial of n natural number is : "<<fact<<endl;
}; */


/* // to find if a number is prime
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter number : ";
  cin>>n;

  if(n < 2)
  {
    cout<<"Not a prime number";
    return 0;
  }
  else
  {
      for( int i = 2; i < n; i++)
      {
        if(n % i == 0)
       {
       cout<<"not prime";
       return 0;
       }
      };
  };

  cout<<"prime number found";
  return 0;
};
 */

/* //calculate  prime number from 1 to n method1
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    return 0;
}

/* method2
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    if (n < 2) {
        cout << "No prime numbers less than 2" << endl;
        return 0;
    }
    
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    // Sieve of Eratosthenes
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    // Count and print primes
    int count = 0;
    cout << "Prime numbers from 2 to " << n << " are:" << endl;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
            count++;
        }
    }
    
    cout << "\nTotal number of primes: " << count << endl;
    
    return 0;
}
 */ 

// calculate fibonacci series
/* #include<iostream>
using namespace std;
int main()
{
  int n, t1 = 0, t2 = 1, nextTerm;
  cout<<"Enter Number : ";
  cin>>n;

  cout<<"Fibonacci Series : ";
  for(int i = 1; i <= n; i++)
  {
    cout<<t1<<" ";
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
  }
} */

// fibonacci at given position
/* #include <iostream>
using namespace std;

// Function to print first n Fibonacci numbers
void printFibonacciSeries(int n) {
    if (n <= 0) return;
    
    long long a = 0, b = 1;  // first two numbers
    cout << "Fibonacci series up to " << n << " terms: ";
    
    for (int i = 1; i <= n; i++) {
        cout << a << " ";     // print current term
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

// Function to find Fibonacci number at a given position (0-indexed)
long long fibonacciAtPosition(int pos) {
    if (pos < 0) return -1;   // invalid position
    if (pos == 0) return 0;
    if (pos == 1) return 1;
    
    long long a = 0, b = 1, c;
    for (int i = 2; i <= pos; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n, pos;
    
    // Part 1: Print series
    cout << "Enter number of terms for Fibonacci series: ";
    cin >> n;
    printFibonacciSeries(n);
    
    // Part 2: Find value at random position
    cout << "\nEnter position to find Fibonacci value (0-indexed): ";
    cin >> pos;
    cout << "Fibonacci number at position " << pos << " is: " 
         << fibonacciAtPosition(pos) << endl;
    
    return 0;
} */
/* // to print number from 250 to 280
#include<iostream>
using namespace std;
int main()
{
for (int i = 280; i >= 250 ;i--)
{
  cout<<i<<" ";
};
}; */

/* // to print char from a to z
#include<iostream>
using namespace std;
int main()
{
for (char alp = 'A'; alp <= 'Z' ;alp++)
{
  cout<<alp<<" ";
};
}
 */

/* //  to print char from z to a
#include<iostream>
using namespace std;
int main()
{
for (char alp = 'Z'; alp >= 'A' ;alp--)
{
  cout<<alp<<" ";
};
} */

//Arithmetic Progression
/* #include<iostream>
using namespace std;
int main()
{
   for (int t = 220; t<=730 ;t+=7)
  {
  cout<<t<<" ";
  } 
} */

//sum of squares of first n natural numbers
/*  #include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Number : ";
  cin>>n;
  int sum = 0;
  for (int i = 1; i<= n; i++)
  {
  sum += i*i; 
  }
  cout<<"sum of squares of n natural numbers is : "<<sum<<endl;
} 
 */

//sum of cubes of first n natural numbers
/* #include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Number : ";
  cin>>n;
  int sum = 0;
  for (int i = 1; i<= n; i++)
  {
  sum += i*i*i; 
  }
  cout<<"sum of cubes of n natural numbers is : "<<sum<<endl;
} */
/* 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter position: ";
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int a = 0, b = 1, next;

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
        cout<<b<<" ";
    }

    cout << "\nTotal numbers are: " << b << endl;

    return 0;
} */
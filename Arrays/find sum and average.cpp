//1. to take 20 elements from user input and find its sum
/* #include<iostream>
using namespace std;
int main(){
int arr[20],sum = 0;
cout<<"enter 20 numbers : ";
for(int i = 0;i < 20; i++)
{
cin >> arr[i];
sum = sum + arr[i];
cout<<sum<<endl;
}
} */

//2. to find average of 18 elemens
/* #include<iostream>
using namespace std;
int main()
{
int arr[18];
float sum = 0, avg;
for(int i = 0;i < 18; i++)
{
    cin>>arr[i];
    sum = sum + arr[i];
}
    avg = sum / 18;
    cout<<avg<<endl;
return 0;
} 

 */

//3. find index of element in the array and ask user to input the array
/* #include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, target,index = -1;
    cout<<"Enter Size of Array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements in the array : ";
    for(int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    cout<<"Enter Target number : ";
    cin>>target;
    for(int i = 0;i < n; i++)
    {
        if (target == arr[i])
        {
            index = i;
            break;
        }
    }
    cout<<"Index is : "<<index;
    return 0;
} */

//4. to print char from 'a' to 'z'
/* #include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cout <<"enter no. of elements : ";
cin >> n;
vector<char> arr(n);

if(n < 0 || n > 26)
{
cout<<"INVALID INPUT";
return 0;
}
for(int i = 0;i < n; i++)
{
    arr[i] = 'a' + i;
}
cout<<"Characters are : "<<endl;
for(int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
return 0;
} */
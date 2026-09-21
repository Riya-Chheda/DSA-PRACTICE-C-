#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

    //create vector, declare
    vector<int> v;
    vector<int>  v1(5,1);
    cout<<"Size of v1 : "<<v1.size()<<endl;
    cout<<"Capacity of v1 : "<<v1.capacity()<<endl;
    //when initializing vector with same value size == capacity
    v1.push_back(8);
    cout<<"Size of v1 : "<<v1.size()<<endl;
    cout<<"Capacity of v1 : "<<v1.capacity()<<endl;
    //size and capacity
    cout<<"Size of v : "<<v.size()<<endl;
    cout<<"Capacity of v : "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of v : "<<v.size()<<endl;
    cout<<"Capacity of v : "<<v.capacity()<<endl;
    //update value
    v[1] = 5;

    vector<int> v3 = {1,2,3,4,5};
    cout<<"Size of v3 : "<<v3.size()<<endl;

    // to delete values from vector
    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);
    vnew.push_back(33);

    //to search for element using binary search
    cout<<binary_search(vnew.begin(),vnew.end(),45)<<endl;
    //to search for a particular index
    cout<<find(vnew.begin(),vnew.end(),41)-vnew.begin()<<endl;
    //to count for values in array
    cout<<count(vnew.begin(),vnew.end(),33)<<endl;

    //to find maximum or minimum of vector
    int maxim = *max_element(vnew.begin(),vnew.end());
    cout<<"Maximum Element : "<<maxim<<endl;
    int minim = *min_element(vnew.begin(),vnew.end());
    cout<<"Minimum element : "<<minim<<endl;

    //to sort values in increasing order
    sort(vnew.begin(),vnew.end());
    cout<<"Sorted Array in Increasing order : ";
    for(int i=0; i < vnew.size(); i++)
    {
    cout<<vnew[i]<<" ";
    }
    cout<<endl;

    //lower_bound: pehla element jo >= target ho
auto lb = lower_bound(vnew.begin(), vnew.end(), 42);
cout << "Lower bound of 42: " << *lb << " at index " << (lb - vnew.begin()) << endl;

//upper_bound: pehla element jo > target ho (strictly greater)
auto ub = upper_bound(vnew.begin(), vnew.end(), 42);
cout << "Upper bound of 42: " << *ub << " at index " << (ub - vnew.begin()) << endl;

    //to sort values in increasing order
    sort(vnew.begin(),vnew.end());
    cout<<"Sorted Array in Increasing order : ";
    for(int i=0; i < vnew.size(); i++)
    {
    cout<<vnew[i]<<" ";
    }
    cout<<endl;
    //to sort values in Decreasing order
    sort(vnew.begin(),vnew.end(), greater<int>());//also u can use sort(vnew.rbegin(),vnew.rend());
    cout<<"Sorted Array in Decreasing order: ";
    for(int i=0; i < vnew.size(); i++)
    {
    cout<<vnew[i]<<" ";
    }
    cout<<endl;

    //delete a particular element
    vnew.erase(vnew.begin() + 1);
  
   vnew.pop_back();
    cout<<"Size of vnew : "<<vnew.size()<<endl;
    cout<<"Capacity of vnew : "<<vnew.capacity()<<endl;

    //insert new value
    vnew.insert(vnew.begin() + 1,50);

    //to change value of arr[1] = 50 to 37
    vnew[1] = 37;

    //to print 1st and last element 
    cout<<vnew.front()<<endl;
    cout<<vnew.back()<<endl;
    cout<<vnew[vnew.size() - 1]<<endl;

    //method 1 to print elements of array
    for(auto it = vnew.begin(); it != vnew.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //method 2 to print elements of array
    for(auto i: vnew)
    cout<<i<<" "<<endl;

    //copy value of one vector into another
    vnew = v3;
    cout<<vnew.size()<<endl;

    //to remove all values of vector
   // vnew.clear();
    cout<<"Size of vnew : "<<vnew.size()<<endl;
    cout<<"Capacity of vnew : "<<vnew.capacity()<<endl;

    for(int i=0; i < vnew.size(); i++)
    {
    cout<<vnew[i]<<" ";
    }
}
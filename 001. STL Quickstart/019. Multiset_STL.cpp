#include <iostream>
#include<set>
using namespace std;

typedef multiset<int>::iterator I;

int main() {
    // declare a set
    int arr[] = {1,2,3,4,1,5,2,6,4,7,1,0,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    multiset<int> s(arr,arr+n);

    //insert into set
    s.insert(8);

    //iterate over set
    for(auto x:s)
        cout<<x<<" ";
    cout<<endl;

    //count of element
    cout<<"Count of 2 : "<<s.count(2)<<endl;

    //delete an element
    s.erase(1);
    cout<<"After deleting 1..."<<endl;
    for(auto x:s)
        cout<<x<<" ";
    cout<<endl;

    // equal range

    pair<I,I> p = s.equal_range(4);
    for(auto i = p.first;i!=p.second;i++)
        cout<<*i<<" ";
    cout<<endl;
}

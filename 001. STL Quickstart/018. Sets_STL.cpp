#include <iostream>
#include<set>
using namespace std;

int main() {
    
    // declare a set
    int arr[] = {1,2,3,4,1,5,2,6,4,7,1,0,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    set<int> s(arr,arr+n);

    //insert into set
    s.insert(8);

    //iterate over set
    for(auto x:s)
        cout<<x<<" ";
    cout<<endl;

    //delete an element
    s.erase(4);
    cout<<"After deleting 4..."<<endl;
    for(auto x:s)
        cout<<x<<" ";
    cout<<endl;
}

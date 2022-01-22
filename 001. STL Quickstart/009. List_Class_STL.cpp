#include <iostream>
#include<list>
using namespace std;
int main() {
    //Declaring a list
    list<int> l1;
    list<int> l2{1,2,2,3,4};
    list<int> l3(l2);

    //Iterate over a list
    for(auto it:l2)
        cout<<it<<" ";
    cout<<endl;

    //insert into list
    l2.push_back(10);
    l2.push_front(20);

    auto it = l2.begin();
    it++;
    l2.insert(it,34);
    it++;
    l2.insert(it,2,23);

    for(auto it:l2)
        cout<<it<<" ";
    cout<<endl;

    // sorting the list
    l2.sort();
    for(auto it:l2)
        cout<<it<<" ";
    cout<<endl;

    //reverse the list
    l2.reverse();
    for(auto it:l2)
        cout<<it<<" ";
    cout<<endl;

    //remove elements
    l2.remove(2);
    auto it1 = l2.begin();
    it1++;
    l2.erase(it1);

    for(auto it:l2)
        cout<<it<<" ";
    cout<<endl;

    // front element
    cout<<l2.front()<<endl;
    //last element
    cout<<l2.back()<<endl;


}

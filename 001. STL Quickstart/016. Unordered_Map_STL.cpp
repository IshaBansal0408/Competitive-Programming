#include <iostream>
#include<unordered_map>
#include<string.h>
using namespace std;

int main() {
    //creation of multimap
    unordered_map<char,string> um;

    //insert into multimap
    pair<char,string> p;
    p.first = 'a';
    p.second = "apple";
    um.insert(p);
    p.first = 'c';
    p.second = "cat";
    um.insert(p);
    p.first = 'd';
    p.second = "dart";
    um.insert(p);
    p.first = 'c';
    p.second = "camera";
    um.insert(p);
    p.first = 'a';
    p.second = "america";
    um.insert(p);
    p.first = 'e';
    p.second = "elephant";
    um.insert(p);
    p.first = 'g';
    p.second = "goa";
    um.insert(p);

    // iterate over multimap
    for(auto it:um)
        cout<<it.first<<" : "<<it.second<<endl;
    cout<<endl;

    // erase the key
    um.erase('a');
    um.erase('g');
    cout<<"After erasing 'a' and 'g'..."<<endl;
    for(auto it:um)
        cout<<it.first<<" : "<<it.second<<endl;
    cout<<endl;

    // find a key
    char k = 'd';
    auto f = um.find(k);
    if(f!=um.end())
        cout<<k<<" for "<<f->second;
    else
        cout<<k<<" not found!";
    cout<<endl;


}

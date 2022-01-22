#include <iostream>
#include<map>
#include<string.h>
using namespace std;

int main() {
    //creation of multimap
    multimap<char,string> mm;

    //insert into multimap
    pair<char,string> p;
    p.first = 'a';
    p.second = "apple";
    mm.insert(p);
    p.first = 'c';
    p.second = "cat";
    mm.insert(p);
    p.first = 'd';
    p.second = "dart";
    mm.insert(p);
    p.first = 'c';
    p.second = "camera";
    mm.insert(p);
    p.first = 'a';
    p.second = "america";
    mm.insert(p);
    p.first = 'e';
    p.second = "elephant";
    mm.insert(p);
    p.first = 'g';
    p.second = "goa";
    mm.insert(p);

    // iterate over multimap
    for(auto it:mm)
        cout<<it.first<<" : "<<it.second<<endl;
    cout<<endl;

    // erase the key
    mm.erase('a');
    mm.erase('g');
    cout<<"After erasing 'a' and 'g'..."<<endl;
    for(auto it:mm)
        cout<<it.first<<" : "<<it.second<<endl;
    cout<<endl;

    // find a key
    char k = 'd';
    auto f = mm.find(k);
    if(f!=mm.end())
        cout<<k<<" for "<<f->second;
    else
        cout<<k<<" not found!";
    cout<<endl;


}

#include <iostream>
#include<map>
#include<string.h>
using namespace std;
int main() {
    
    // creating a map
    map<string,int> m;

    // inserting values to map
    m.insert(make_pair("Pen",5));   /// method 1
    
    pair<string,int> p;
    p.first = "Pencil";
    p.second = 3;
    m.insert(p);    /// method 2

    m["Notebook"] = 15;     /// method 3
    m["SketchBook"] = 20;
    m["Scale"] = 5;
    m["Compass"] = 10;

    // Finding a key
    string k1 = "Notebook";
    string k2 = "RuleSheets";
    
    auto f1 = m.find(k1);
    auto f2 = m.find(k2);
    
    if(f1!=m.end())
        cout<<"Price of "<<k1<<" is "<<m[k1]<<endl;
    else
        cout<<k1<<" not found in shop!"<<endl;
    
    if(f2!=m.end())
        cout<<"Price of "<<k2<<" is "<<m[k2]<<endl;
    else
        cout<<k2<<" not found in shop!"<<endl;
    cout<<endl;
    
    // Iterate Over the map
    for(auto it:m)
        cout<<it.first<<" : "<<it.second<<endl;
    cout<<endl;

    // delete key
    m.erase("Scale");
    cout<<"After Deletion of Scale..."<<endl;
    for(auto it:m)
        cout<<it.first<<" : "<<it.second<<endl;


}

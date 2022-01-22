#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/*
    What is the compare_class doing?

    return greater string in case of substring
    otherwise smaller string

        if b starts with a - return b (false means second string)
        if a starts with b - return a (true means first string)
        else return the smaller string 
*/

bool compare_class(string a,string b){
    // b starts with a - a<=b
    if((a.size()<=b.size())&&(b.substr(0,a.size())==a))
        return false;
    // a starts with b - a>=b
    else if((a.size()>=b.size())&&(a.substr(0,b.size())==b))
        return true;
    else
        return a<b;
}

int main() {
    int n; cin>>n; cin.get();
    vector<string> v;
    v.reserve(n);
    string s;
    for(int i=0;i<n;i++){
        getline(cin,s);
        v.push_back(s);
    }
    sort(v.begin(),v.end(),compare_class);
    for(auto a:v)
        cout<<a<<endl;
}

#include <iostream>
#include<vector>
using namespace std;

/*
    All the numbers are present twice except for 
    one number which is only present once. 
    Find the unique number without taking 
    any extra spaces and in linear time
*/

int main() {
    int n,t;
    vector<int> v;
    v.reserve(100000);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    
    int ans = 0;
    for(auto i:v)
        ans^=i;

    cout<<ans;
}

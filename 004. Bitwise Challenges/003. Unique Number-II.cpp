#include <iostream>
#include<vector>
#include<set>
using namespace std;

/*
    All the numbers are present twice except for 
    two numbers which is only present once. 
    Find the unique numbers without taking 
    any extra spaces and in linear time
*/

int set_pos(int n){
    int p = 0;
    while(n!=0){
        int t = n&1;
        if(t==1)
            return p;
        n = n>>1;
        p++;
    }
    return p;
}

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

    int pos = set_pos(ans);

    vector<int> v1;v1.reserve(100000);
    for(auto i:v){
        int p = set_pos(i);
        if(p==pos)
            v1.push_back(i);
    }
    int ans1 = 0;
    for(auto i:v1)
        ans1^=i;
    ans^=ans1;

    set<int> s;
    s.insert(ans);
    s.insert(ans1);
    auto it = s.begin();
    cout<<*it<<" ";
    it = s.end();
    it--;
    cout<<*it;

}

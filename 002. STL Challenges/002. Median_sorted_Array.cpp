#include <iostream>
#include<set>

using namespace std;
int main() {
    int n;cin>>n;cin.get();
    multiset<int> ms;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        ms.insert(x);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        ms.insert(x);
    }
    
    /*
    for(auto a:ms)
        cout<<a<<" ";
    cout<<endl;
    */

    auto it1 = ms.begin();
    for(int i=0;i<n;i++)
        it1++;
    
    auto it2 = ms.begin();
    for(int i=0;i<n-1;i++)
        it2++;
    
    //cout<<*it1<<" "<<*it2<<endl;
    int median = (*it1 + *it2)/2;
    cout<<median;

    return 0;
}

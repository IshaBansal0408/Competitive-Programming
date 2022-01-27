#include <iostream>
#include<vector>
#include <math.h>
using namespace std;

/*
    We are given an array containg n numbers. 
    All the numbers are present thrice except for 
    one number which is only present once. 
    Find the unique number.
*/
int main() {

    vector<int> v(64,0);
    long long int n;
    int no,p;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>no;
        p = 63;
        while(no!=0){
            v[p]+=(no&1);
            p--;
            no=no>>1;
        }
    }

    for(int i=0;i<64;i++){
        v[i] = v[i] % 3;
    }

    auto it = v.end();
    it--;
    int ans = 0,po = 0;
    while(it!=v.begin()){
        if(*it==1){
            ans+=pow(2,po);
        }
        po++;
        it--;
    }

    cout<<ans;
    
    return 0;
}

#include <iostream>
using namespace std;

int count_set_1(int n){
    int cnt = 0;
    while(n!=0){
        int lb = n&1;
        if(lb==1)
            cnt++;
        n = n>>1; //remove last bit
    }
    return cnt;
}

int count_set_2(int n){
    int cnt = 0;
    while(n>0){
        n = n&(n-1); //encounters only set bits
        cnt++;
    }
    return cnt;
}

int count_set_3(int n){
    return __builtin_popcount(n);
}

int main() {
    int n;cin>>n;

    cout<<"Number of set bits!"<<endl;
    cout<<"Approach 1 : "<< count_set_1(n)<<endl;
    cout<<"Approach 2 : "<< count_set_2(n)<<endl;
    cout<<"Approach 3 : "<< count_set_3(n)<<endl;

    return 0;
}

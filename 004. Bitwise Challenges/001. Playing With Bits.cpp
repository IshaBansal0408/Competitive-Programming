#include<iostream>
using namespace std;

/*
    Your task is to count the no of set-bits in 
    for all numbers between a and b (both inclusive)
*/

int count_set(int x){
    int cnt = 0;
    while(x!=0){
        int t = x & 1;
        if(t==1)
            cnt++; 
        x = x>>1;
    }
    return cnt;
}

int main() {
    int Q,a,b;
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>a>>b;
        int set_bit_cnt = 0;
        for(int j=a;j<=b;j++){
            set_bit_cnt += count_set(j);
        }
        cout<<set_bit_cnt<<endl;
    }
	return 0;
}
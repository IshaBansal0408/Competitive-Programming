#include <iostream>
using namespace std;

/*
    We are given two coins of value x and y. 
    We have to find the maximum of value of 
    a XOR b where x <= a <= b <= y.
*/

int main() {
    int a,b;
    cin>>a;
    cin.get();
    cin>>b;

    int in_max = a^b;    
    for(int i=a;i<b;i++){
        for(int j=a+1;j<b;j++){
            int t_xor = i^j;
            if(t_xor>in_max)
                in_max = t_xor;
        }
    }
    cout<<in_max;
    return 0;
}

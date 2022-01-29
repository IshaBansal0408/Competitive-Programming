#include <iostream>
using namespace std;

int dec_2_bin(int n){
    int ans = 0,p=1;
    while(n>0){
        int lb = n&1;
        ans+=lb*p;
        p*=10;
        n=n>>1;
    }
    return ans;
}

int main() {
    int n;cin>>n;
    cout<<"Decimal Number : "<<n<<endl;
    cout<<"Binary Number : "<<dec_2_bin(n)<<endl;
}

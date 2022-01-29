#include <iostream>
using namespace std;

void replace_NM(int &n,int m,int i,int j){
    // clear bits from i to j
    n = n & ((-1<<(j+1))|(~(-1<<i)));
    // left shift M by i bits
    m = m<<i;
    // perform or operation
    n = n|m;
    return;
}
int main() {
    int n,m,i,j;
    cin>>n>>m>>i>>j;

    cout<<"Number 1 : "<<n<<endl;
    cout<<"Number 2 : "<<m<<endl;
    
    replace_NM(n,m,i,j);

    cout<<"Changed Number : "<<n<<endl;
    
}

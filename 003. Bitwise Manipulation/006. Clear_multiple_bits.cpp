#include <iostream>
using namespace std;

void clear_last_i(int &n,int i){
    n = n & (-1<<i);
    return;
}

void clear_i2j(int &n,int i,int j){
    n = n & ((-1<<(j+1)) | (~(-1<<i)));
    return;
}

int main() {
    int n;
    cin>>n;
    int cn = n;
    cout<<"Original number : "<<n<<endl;
    
    cout<<"Clear 3 bits : ";
    clear_last_i(n,3);
    cout<<n<<endl;

    n=cn;
    cout<<"Original number : "<<n<<endl;
    cout<<"Clear 1-4 bits : ";
    clear_i2j(n,1,2);
    cout<<n<<endl;
}

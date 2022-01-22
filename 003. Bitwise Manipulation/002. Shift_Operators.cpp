#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;

    // left shift
    int l1 = n<<1;
    // right shift
    int r1 = n>>1;

    cout<<"Left shift by 1 : "<<l1<<endl;
    cout<<"Right shift by 1 : "<<r1<<endl;

    // left shift
    int l2 = n<<3;
    // right shift
    int r2 = n>>3;

    cout<<"Left shift by 3 : "<<l2<<endl;
    cout<<"Right shift by 3 : "<<r2<<endl;

}

#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;

    int AND = a&b;
    int OR = a|b;
    int XOR = a^b;
    int N1 = ~a;
    int N2 = ~b;
    
    cout<<"Bitwise AND (&) Operation : "<<AND<<endl;
    cout<<"Bitwise OR (|) Operation : "<<OR<<endl;
    cout<<"Bitwise XOR (^) Operation : "<<XOR<<endl;
    cout<<"Bitwise NOT (~) Operation on a : "<<N1<<endl;
    cout<<"Bitwise NOT (~) Operation on b : "<<N2<<endl;

    return 0;
}

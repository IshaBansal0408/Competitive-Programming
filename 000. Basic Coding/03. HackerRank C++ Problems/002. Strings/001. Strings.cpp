#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    getline(cin,a);
    getline(cin,b);
    
    cout<<a.length()<<" "<<b.length()<<endl;
    
    cout<<a+b<<endl;
    
    char t = a[0];
    char t1 = b[0];
    a[0] = t1; b[0] = t;
    cout<<a<<" "<<b;
    
    return 0;
}
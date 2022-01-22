#include <iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> S;
    //add elements
    for(int i=0;i<10;i++)
        S.push(i);
    // Iterate over the Stack
    while(!S.empty()){
        cout<<S.top()<<" ";
        S.pop();
    }
}

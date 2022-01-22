#include <iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> Q;
    //add elements
    for(int i=0;i<10;i++)
        Q.push(i);
    // Iterate over the Stack
    while(!Q.empty()){
        cout<<Q.front()<<" ";
        Q.pop();
    }
}

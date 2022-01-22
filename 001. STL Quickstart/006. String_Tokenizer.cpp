#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char S[200] = "Today is very Sunny Weather";
    char* tk = strtok(S," ");
    cout<<"Output of tk pointer : "<<tk<<endl;

    //get all the other tokens
    cout<<"Other tokens are : "<<endl;
    while(tk!=NULL){
        tk = strtok(NULL," ");
        cout<<tk<<",";
    }
}

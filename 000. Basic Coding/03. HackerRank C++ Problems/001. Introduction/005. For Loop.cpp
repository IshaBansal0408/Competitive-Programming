#include <iostream>
#include <cstdio>
using namespace std;

void less_than_nine(int n){
    if(n==1)
        cout<<"one";
    else if(n==2)
        cout<<"two";
    else if(n==3)
        cout<<"three";
    else if(n==4)
        cout<<"four";
    else if(n==5)
        cout<<"five";
    else if(n==6)
        cout<<"six";
    else if(n==7)
        cout<<"seven";
    else if(n==8)
        cout<<"eight";
    else if(n==9)
        cout<<"nine";
}

void greater_than_nine(int n){

    if(n%2==0)
        cout<<"even";
    else
        cout<<"odd";
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i<=9)
            less_than_nine(i);
        else
            greater_than_nine(i);
        cout<<endl;
    }
    return 0;
}

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare_length(string a,string b){
    // if length is same - lexio order
    if(a.length()==b.length())
        return a<b;
    else
        // return the one with larger length
        return a.length()>b.length();
}

int main() {

    int n;cin>>n;
    cin.get(); //capture extra characters
    string S[100];
    for(int i=0;i<n;i++)
        getline(cin,S[i]);
    
    cout<<"Original List...";
    for(int i=0;i<n;i++)
        cout<<S[i]<<" ";
    cout<<endl;
    
    // sort acc to lexiographical order
    sort(S,S+n);
    cout<<"Sorted acc to Lexio order...";
    for(int i=0;i<n;i++)
        cout<<S[i]<<" ";
    cout<<endl;

    //sort acc to length
    sort(S,S+n,compare_length);
    cout<<"Sorted acc to length ...";
    for(int i=0;i<n;i++)
        cout<<S[i]<<" ";
    cout<<endl;


}

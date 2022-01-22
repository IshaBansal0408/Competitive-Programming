#include <iostream>
#include<string>
#include<queue>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string n,int a){
            name = n;
            age = a;
        }
};

class Compare_Person{
    public:
        bool operator()(Person A,Person B){
            return A.age<B.age;
        }
};

int main() {
    
    priority_queue<Person,vector<Person>,Compare_Person> PPQ;
    string N;int A;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>N;cin>>A;
        Person p = Person(N,A);
        PPQ.push(p);
    }
    int k;cin>>k;
    for(int i=0;i<k;i++){
        Person p = PPQ.top();
        cout<<p.name<<" "<<p.age<<endl;
        PPQ.pop();
    }
}

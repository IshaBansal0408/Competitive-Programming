#include <iostream>
#include<unordered_map>
#include<string.h>
using namespace std;

// Student Class
class Student{
    public:
        string fn;
        string ln;
        string rn;

        Student(string f,string l,string r){
            fn=f;
            ln=l;
            rn=r;
        }
        
        // overload == operator
        bool operator == (const Student &s) const{
            return rn == s.rn?true:false;
        }
};

// define custom hash function
class Hash_Fn{
    public:
        size_t operator()(const Student &s) const{
            return s.fn.length()+s.ln.length();
        }
};

int main() {

    unordered_map<Student,int,Hash_Fn> Cm;
    
    Student s1("Raghav","Sharma","034");
    Student s2("Raghav","Sharma","032");
    Student s3("Arnav","Singh","003");
    Student s4("Arnav","Mishra","005");
    Student s5("Neha","Gupta","056");

    Cm[s1] = 100;
    Cm[s2] = 60;
    Cm[s3] = 70;
    Cm[s4] = 90;
    Cm[s5] = 95;

    for(auto it:Cm){
        cout<<it.first.fn<<" "<<it.first.ln<<" : "<<it.second<<endl;
    }
    
}


#include <iostream>
#include <string>

using namespace std;
int main() {
    // Creation of String
    string s0;
    string s1("Hello");
    string s2 = "Hello World";
    string s3(s1);
    string s4 = s2;
    char a[] = {'a','b','c','\0'};
    string s5(a);

    cout<<"1st String: "<<s0<<endl;
    cout<<"2nd String: "<<s1<<endl;
    cout<<"3rd String: "<<s2<<endl;
    cout<<"4th String: "<<s3<<endl;
    cout<<"5th String: "<<s4<<endl;
    cout<<"6th String: "<<s5<<endl;

    // check if a string is empty or not
    if(s0.empty())
        cout<<"String s0 is empty!"<<endl;
    
    // Add elements to string
    s0.append("Love for C++");
    cout<<"After addition 1, s0 becomes: "<<s0<<endl;
    s0+=" and Python";
    cout<<"After addition 2, s0 becomes: "<<s0<<endl;

    // Get length of string
    cout<<"Length of "<<s0<<" is : "<<s0.length()<<endl;
    cout<<"length of "<<s1<<" is : "<<s1.length()<<endl;

    // Clear the string
    cout<<"Clearing s0..."<<endl;
    s0.clear();
    cout<<"Length of "<<s0<<" is : "<<s0.length()<<endl;

    // compare two strings
    string S1 = "mango";
    string S2 = "orange";
    cout<<"Comparing "<<S1<<" and "<<S2<<" -> "<<S1.compare(S2)<<endl;
    cout<<"Comparing "<<S2<<" and "<<S1<<" -> "<<S2.compare(S1)<<endl;

    if(S1>S2)
        cout<<S1<<" is greater than "<<S2<<endl;
    else
        cout<<S2<<" is greater than "<<S1<<endl;

    // Find substring
    string S3 = "I love both Black and Blue";
    cout<<"String is "<<S3<<endl;
    string word = "Black";
    int idx = S3.find(word);
    cout<<word<<" found at "<<idx<<endl;

    // Remove a word
    int l = word.length();
    S3.erase(idx,l);
    cout<<"After removal string becomes..."<<S3<<endl;

    // Iterate over a string
    string S4 = "Iterate";
    for(int i=0;i<S4.length();i++)
        cout<<S4[i]<<" - ";
    cout<<endl;
    for(auto it=S4.begin();it!=S4.end();it++)
        cout<<*it<<" , ";
    cout<<endl;
    for(auto it:S4)
        cout<<it<<" : ";

}

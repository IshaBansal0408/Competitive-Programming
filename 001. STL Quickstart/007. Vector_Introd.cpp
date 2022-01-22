#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    // Creation of vector
    vector<int> v1; //null vector
    vector<int> v2(5,20); //add 5 elements with value 20
    vector<int> v3(v2.begin(),v2.end()); //make a copy of vector
    vector<int> v4{1,2,3,4,5}; //create a vector = [1,2,3,4,5]

    // Iterate the vector
    vector<int> v5{10,20,30,40,50};
    for(int i=0;i<v5.size();i++)
        cout<<v5[i]<<" ";
    cout<<endl;
    for(auto it=v5.begin();it!=v5.end();it++)
        cout<<*it<<" - ";
    cout<<endl;
    for(auto it:v5)
        cout<<it<<" , ";
    cout<<endl;

    // Add elements to Vector
    // Also checking size and capacity at each step
    vector<int> v6;

    // max no of elements in worst case
    cout<<"Worst case : "<<v6.max_size()<<endl;
    cout<<endl;
    
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        cout<<"Inserting "<<x<<"..."<<endl;
        v6.push_back(x);
        cout<<"Size of vector : "<<v6.size()<<endl;
        cout<<"Capacity of vector : "<<v6.capacity()<<endl;
        cout<<endl;
    }

    

}

#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v{1,2,3,4,5};
    for(auto it:v) cout<<it<<" ";
    cout<<endl;

    // add elements
    v.push_back(6);
    cout<<"After Adding elements - "<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;

    // pop elements
    v.pop_back();
    cout<<"After Removing elements - "<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;

    // insert in middle
    v.insert(v.begin()+3,100);
    cout<<"After Adding 100 at 3rd position - "<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;

    v.insert(v.begin()+3,3,50);
    cout<<"After Adding 3 50 values at 3rd position - "<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;

    //erase element
    v.erase(v.begin()+3);
    cout<<"After removing the 3rd element - "<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;

    v.erase(v.begin()+3,v.begin()+5);
    cout<<"After removing 3 to 5 elements - "<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;

    //front most element
    cout<<"Frontmost element : "<<v.front()<<endl;
    // end element
    cout<<"Last element : "<<v.back()<<endl;
    
    //clear vector
    v.clear();
    //check if vector is empty
    if(v.empty())
        cout<<"Vector empty!"<<endl;
    

}

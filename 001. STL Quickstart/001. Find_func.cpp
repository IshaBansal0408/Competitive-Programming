#include <iostream>
#include<algorithm>

using namespace std;
int main() {

    int arr[] = {10,32,54,76,98,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // Enter Element to Search for
    int key;
    cin>>key; 
    
    // applying the find function
    auto it = find(arr,arr+n,key);
    int index = it - arr;

    // If element is not present, then index = n
    if(index == n)
        cout<<key<<" Not Found!";
    // If present
    else
        cout<<key<<" Found at "<<index;

}

#include <iostream>
#include<algorithm>

using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key; cin>>key;

    bool chk = binary_search(arr,arr+n,key);
    if(chk)
        cout<<key<<" Present!";
    else
        cout<<key<<" Absent!";
}

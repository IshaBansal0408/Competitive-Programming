#include <iostream>
#include<algorithm>

using namespace std;
int main() {
    int arr[] = {1,2,2,3,3,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key; cin>>key;

    auto lb = lower_bound(arr,arr+n,key);
    auto ub = upper_bound(arr,arr+n,key);
    int freq = ub-lb;

    cout<<"Lower Bound of "<<key<<" is "<<lb-arr<<endl;
    cout<<"Upper Bound of "<<key<<" is "<<ub-arr<<endl;
    cout<<"Frequency of "<<key<<" is "<<freq;
}

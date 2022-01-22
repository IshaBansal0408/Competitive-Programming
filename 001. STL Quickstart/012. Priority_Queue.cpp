#include <iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
    // By default => max heap
    priority_queue<int> pq_max;
    int x;
    for(int i=0;i<10;i++){
        cin>>x;
        pq_max.push(x);
    }
    cout<<"Max Heap is...";
    while(!pq_max.empty()){
        cout<<pq_max.top()<<" ";
        pq_max.pop();
    }
    cout<<endl;

    // get min heap
    priority_queue<int,vector<int>,greater<int>> pq_min;
    for(int i=0;i<10;i++){
        cin>>x;
        pq_min.push(x);
    }
    cout<<"Min Heap is...";
    while(!pq_min.empty()){
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }
}

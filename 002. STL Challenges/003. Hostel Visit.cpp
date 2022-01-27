#include <iostream>
#include<queue>
using namespace std;

/*
Dean of MAIT is going to visit Hostels of MAIT. 
As you know that he is a very busy person so he 
decided to visit only first "K" nearest Hostels. 
Hostels are situated in 2D plane. 
You are given the coordinates of hostels and 
you have to answer the Rocket distance of 
Kth nearest hostel from origin ( Dean's place ).
*/

class Hostel_Info{
    public:
        long long int x;
        long long int y;
        // constructor
        Hostel_Info(int x,int y){
            this->x = x;
            this->y = y;
        }
        // computing distance
        long long int Rocket_Dis(){
            long long int dis = x*x + y*y;
            return dis;
        }
        // displaying distance
        void print_distance(){
            cout<<Rocket_Dis();
        }
};

// comparator class for priority queue
class comp_dis{
    public:
        bool operator()(Hostel_Info a, Hostel_Info b){
            return a.Rocket_Dis()<b.Rocket_Dis();
        }
};

int main() {
    // no of queries
    long long int Q; cin>>Q; cin.get();
    // K nearest hostels
    long long int K; cin>>K; cin.get();
    // priority queue
    priority_queue<Hostel_Info,vector<Hostel_Info>,comp_dis> pq;
    
    for(int i=0;i<Q;i++){
        // input type
        int t; cin>>t; cin.get();
        
        // Input 2 - Kth nearest hostel till now 
        if(t==2){
            //get topmost hostel
            Hostel_Info p= pq.top();
            //print distance
            p.print_distance();
        }
        
        // Input 1 - Add Hostel Information
        else{
            // take input of coordinates
            long long int xc,yc; cin>>xc>>yc;
            cin.get();
            // make hostel
            Hostel_Info p(xc,yc);
            // get current topmost hostel - to compare
            Hostel_Info r = pq.top();
            // check if we already hv K hostels
            long long int size=pq.size();
            // if we still have space - push
            if(size<K){
                pq.push(p);
            }
            // if no space - compare and decide
            else if(p.Rocket_Dis()<r.Rocket_Dis()){
                pq.pop();
                pq.push(p);
            }
        }
    }
    return 0;
}

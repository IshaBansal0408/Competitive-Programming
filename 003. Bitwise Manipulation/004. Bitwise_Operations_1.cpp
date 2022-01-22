#include <iostream>
using namespace std;

// check if a number is even or odd
void even_odd(int &n){
    /* 
        If last bit is 1 - odd 
        otherwise - even 
    */
    int ans = n&1;
    if(ans==1)
        cout<<"The number is Odd!"<<endl;
    else
        cout<<"The number is Even!"<<endl; 
    return;
}

// get the last bit
int last_bit(int &n){
    /*
        perform and with 1
        If last bit is 0 then result - 0
        otherwise result - 1
    */    
    return n&1;
}

// get ith bit
int i_bit(int &n,int i){
    // mask ==> 1<<i
    return (n&(1<<i))>0?1:0;
}

// set ith bit - change bit to 1
void set_i(int &n,int i){
    // mask = 1<<i
    n = n|(1<<i);
    return;
}

// clear ith bit - change bit to 0
void clear_i(int &n,int i){
    // mask = ~1<<i
    n = n & (~(1<<i));
    return;
}

// update ith bit with value v
void update_i(int &n,int i,int v){
    n = (n&(~(1<<i))|(v<<i));
    return;
}

int main() {
    int n = 5;
    cout<<"Original Number : "<<n<<endl;
    
    even_odd(n);
    cout<<"Last bit is : "<<last_bit(n)<<endl;
    cout<<"2nd bit of "<<n<<" is: "<<i_bit(n,2)<<endl;

    cout<<"Value of n after setting 1st bit : ";
    set_i(n,1);
    cout<<n<<endl;

    cout<<"Value of n after clearing 2nd bit : ";
    clear_i(n,2);
    cout<<n<<endl;

    cout<<"Updating the 2nd bit with 1 : ";
    update_i(n,2,1);
    cout<<n<<endl;

    cout<<"Updating the 1st bit with 0 : ";
    update_i(n,1,0);
    cout<<n<<endl;

}

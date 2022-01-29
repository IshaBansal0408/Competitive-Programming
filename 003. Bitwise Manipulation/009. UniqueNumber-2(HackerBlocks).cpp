#include <iostream>
using namespace std;

int get_unique_no(int n,int arr[20],int ans){
    // get the position of set bit
    int pos = 0;
    while(ans>0){
        int lb = ans&1;
        if(lb==1)
            break;
        pos++;
        ans = ans>>1;
    }
    /*if(pos==0 && ans==0)
        cout<<"Error"<<endl;
    else{
        cout<<"Position of set bit : "<<pos<<endl;
    }*/
    int arr1[20],j=0;
    for(int i=0;i<n;i++){
        int b = (arr[i] & (1<<pos))>0?1:0;
        if(b==1){
            arr1[j] = arr[i];
            j++;
        }
    }
  //  cout<<"Number of similar numbers : "<<j<<endl;

    int un1=0;
    for(int i=0;i<j;i++)
        un1^=arr1[i];

    return un1;
}

int main() {
    int n,ans=0,x,arr[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        arr[i] = x;
        ans ^= x;
    }
//    cout<<"XOR of all numbers : "<<ans<<endl;

    int un1 = get_unique_no(n,arr,ans);
    int un2 = ans^un1;
    cout<<"Unique Numbers are : "<<un1<<" and "<<un2<<endl;
}

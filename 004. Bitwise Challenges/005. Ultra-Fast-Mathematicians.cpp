#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*
    The i-th digit of the answer is 1 
    if and only if the i-th digit of the two given numbers 
    differ. In the other case the i-th digit 
    of the answer is 0.
*/

string get_new_string(string s1,string s2){
    int n = s1.length();
    string result;
    for(int i=0;i<n;i++){
        if(s1[i]-s2[i]!=0)
            result+="1";
        else
            result+="0";
    }
    return result;
}

int main() {
	
    vector<pair<string,string>> vs;
	int n; 
    cin>>n; 
    cin.get();
	vs.reserve(n);
	string result,temp1,temp2;

	for(int i=0;i<n;i++){
		
        cin>>temp1;
        cin>>temp2;

        pair<string,string> S;
        S.first = temp1;
        S.second = temp2;
		
        vs.push_back(S);
	}

    for(auto it:vs)
        cout<<get_new_string(it.first,it.second)<<endl;

}
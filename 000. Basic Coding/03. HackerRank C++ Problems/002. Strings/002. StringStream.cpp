#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    
    stringstream ss(str);
    
	vector<int> v;
    
    char cap_char;
    int cap_int;
    while(ss>>cap_int){
        v.push_back(cap_int);
        ss>>cap_char;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
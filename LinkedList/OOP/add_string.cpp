#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int strToInt(string s) {
    stringstream ss;
    ss << s;
    int n;
    ss >> n;
    return n;
}

int main(){
    string s;
    getline(cin, s);
    
    int sum = 0;
    string _s = "";
    int n;
    
    for(char x:s){
        if(x >= '0' && x <= '9'){
            _s = _s + x;
        }else{
            n = strToInt(_s);
            sum += n;
            _s = "";
        }
    }
    n = strToInt(_s);
    sum += n;
    cout<<sum;
    return 0;
}
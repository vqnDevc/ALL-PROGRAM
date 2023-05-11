#include <bits/stdc++.h>
#include <sstream>
using namespace std;

string solution(string s){
    string res="";
    stringstream ss(s);
    while(!ss.eof()){
        string tmp;
        ss >> tmp;
        tmp += " ";
        res += tmp;
    }
    res.erase(res.begin()+res.length()-1);
    return res;
}

int main(int argc, char const *argv[])
{
    string str; getline(cin, str);
    str = solution(str);
    cout << str;
    return 0;
}

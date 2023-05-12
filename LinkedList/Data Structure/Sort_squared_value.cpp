#include <bits/stdc++.h>
#include <sstream>
using namespace std;

vector<int> getInput(string s){
    vector<int> res;
    stringstream ss(s);
    while(!ss.eof()){
        int val;
        ss >> val;
        res.push_back(val);
    }
    return res;
}

int main(){
    string s; getline(cin, s);
    vector<int> v = getInput(s);

    int x=0;
    int y=v.size()-1;
    vector<int> res(v.size());

    for(int i = v.size()-1; i >= 0; i--){
        if(abs(v[x]) > abs(v[y]))
            res[i] = pow(v[x++], 2);
        else
            res[i] = pow(v[y--], 2);
    }

    for(int i = 0; i < res.size()-1; i++)
        cout << res[i] << " ";
    cout << res[res.size()-1];
    return 0;
}
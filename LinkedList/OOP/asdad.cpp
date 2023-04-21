#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s; getline(cin, s);
    map<int, char> mp;
    for(int i = 0; i < s.length(); i++){
        mp[i] = s[i];
    }
    int x; char c;
    cin >> x;
    getchar();
    cin >> c;
    mp[x] = c;
    for(auto i = mp.begin(); i != mp.end(); i++){
        cout<<i->second;
    }
    return 0;
}
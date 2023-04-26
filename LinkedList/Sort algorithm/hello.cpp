#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vt;
    int n; cin>>n;
    while(n--){
        int tmp; cin>>tmp;
        vt.push_back(tmp);
    }

    for(int i=0; i<vt.size(); i++){
        cout<<vt[i]<<" ";
    }
    return 0;
}
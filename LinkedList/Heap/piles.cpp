#include<bits/stdc++.h>
#include<sstream>
using namespace std;

vector<int> getInput(string s, int &sum){
    vector<int> res;
    stringstream os(s);

    while(!os.eof()){
        int val;
        os >> val;
        sum += val;
        res.push_back(val);
    }
    return res;
}

int main(){
    
    int k,sum=0;
    vector<int> v;

    string input;
    getline(cin, input);

    v = getInput(input,sum);
    priority_queue<int> heap(v.begin(),v.end());
    
    cin>>k;

    while(k--){
        int val = heap.top();
        heap.pop();
        sum -= floor(val/2);
        heap.push(val-val/2);
    }
    cout<<sum;
  return 0;
}
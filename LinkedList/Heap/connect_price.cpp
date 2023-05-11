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
    string input;
    getline(cin, input);

    vector<int> v = getInput(input);
    // min heap
    priority_queue<int,vector<int>,greater<int>> min_heap (v.begin(),v.end());

    int price = 0,result=0;
    while(min_heap.size() > 1){
        int t1 = min_heap.top();
        min_heap.pop();
        int t2 = min_heap.top();
        min_heap.pop();
        
        price = t1+t2;
        result += price;
        min_heap.push(price);
    }

    cout << result;
    return 0;
}
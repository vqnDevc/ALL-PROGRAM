#include <bits/stdc++.h>
using namespace std;

vector<string> init(int k){
    vector<string> res;
    queue<string> q;
    q.push("1");
    res.push_back("1");

    while( res.size() < k){
        string top = q.front();
        q.pop();
        res.push_back(top+"0");
        if(res.size() == k)
            break;
        res.push_back(top+"1");
        q.push(top+"0");
        q.push(top+"1");
    }
    return res; 
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    vector<string> v = init(n);
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    return 0;
}

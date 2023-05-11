#include <bits/stdc++.h>
using namespace std;
int solution(int a, int b, int k){
    vector<int> v;
    v.push_back(1);
    for(int i = 2; i <= min(a,b); i++){
        if(a%i==0 && b%i==0){
            v.push_back(i);
        }
    }
    if(v.size() < k) return -1;
    return v[k-1];
}

int main(int argc, char const *argv[])
{
    int a,b,k;
    cin >> a >> b >> k;
    cout << solution(a,b,k);
    return 0;
}

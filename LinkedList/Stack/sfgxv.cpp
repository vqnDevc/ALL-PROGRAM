#include <bits/stdc++.h>
#include <stack>
using namespace std;

int max(int a, int b){
    if(a == b) return a;
    else return a>b?a:b;
}

int main(){
    int n1,n2,n3; cin>>n1>>n2>>n3;
    int a[10000], b[10000], c[10000];
    stack<int>st1,st2,st3;
    int sum1=0,sum2=0,sum3=0;

    for(int i = 0; i < n1; i++){
        cin >> a[i];
        sum1 += a[i];
    }
    for(int i = n1-1; i >= 0; i--){
        st1.push(a[i]);
    }
    
    for(int i = 0; i < n2; i++){
        cin >> b[i];
        sum2 += b[i];
    }
    for(int i = n2-1; i >= 0; i--){
        st2.push(b[i]);
    }
    
    for(int i = 0; i < n3; i++){
        cin >> c[i];
        sum3 += c[i];
    }
    for(int i = n3-1; i >= 0; i--){
        st3.push(c[i]);
    }
    

    cout<<sum1<<" "<<sum2<<" "<<sum3;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int sumNum(int n){
    int sum = 0;

    for(int i=2; i<= n;i++){
        while(n%i==0){
            sum += i;
            n /= i;
        }
    }
    return sum;
}

int solution(int n){
    while(n != sumNum(n)){
        n = sumNum(n);
    }
    return n;
}

int main(){
    int n; cin>>n;
    cout << solution(n);
    return 0;
}
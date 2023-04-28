#include<bits/stdc++.h>

int main(){
    int n; std::cin >>n;
    int Fibo[100000];
    Fibo[0] = 0;
    Fibo[1] = 1;
    for(int i=2; i <=n; i++){
        Fibo[i] = Fibo[i-1]+Fibo[i-2];
    }
    std::cout<<Fibo[n];
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

void createString(int k, char str[], int n){
    if(n == k){
        str[n] = '\0';
        cout << str << " ";
        return;
    }

    if(str[n-1] == '1'){
        str[n] = '0';
        createString(k,str,n+1);
    }

    if(str[n-1] == '0'){
        str[n] = '0';
        createString(k,str,n+1);
        str[n] = '1';
        createString(k,str,n+1);
    } 
}

void allStrings(int k){
    if(k<=0) return;

    char str[k];

    str[0] = '0';
    createString(k, str, 1);

    str[0] = '1';
    createString(k, str, 1);
}

int main(int argc, char const *argv[])
{
    int k; cin >> k;
    allStrings(k);
    return 0;
}

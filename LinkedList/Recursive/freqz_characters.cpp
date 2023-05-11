#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    int freq[256] = {0};
    int apr[256] = {0};

    cin.getline(str, 100);

    for(int i = 0; i < strlen(str); i++) {
        freq[int(str[i])]++; 
    }

    for(int i = 0; i < strlen(str); i++){
        if(apr[int(str[i])] == 0){
            cout << str[i] << freq[int(str[i])] << " ";
            apr[int(str[i])] = 1;
        }
    }

    return 0;
}

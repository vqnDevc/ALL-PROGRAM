#include <bits/stdc++.h>
using namespace std;

void tower(int n, char a, char b, char c){
    if(n==0){
        return;
    }
    tower(n-1,a,c,b);                    // Dịch chuyển ‘N-1’ đĩa từ ‘A’ tới ‘B’, sử dụng C.
    cout << "Disk " << n << " moved from " << a << " to " << c << endl; // Dịch chuyển đĩa cuối cùng từ ‘A’ tới ‘C’.
    tower(n-1,b,a,c);                    // Dịch chuyển ‘N-1’ đĩa từ ‘B’ tới ‘C’, sử dụng A.
}

int main(){
    int n; cin >> n;
    tower(n,'A','B','C');
    return 0;
}
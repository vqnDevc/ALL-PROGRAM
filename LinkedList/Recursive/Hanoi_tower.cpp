#include <bits/stdc++.h>
using namespace std;

void tower(int n, char a, char b, char c){
    if(n==0){
        return;
    }
    tower(n-1,a,c,b);
    cout << "Disk " << n << " moved from " << a << " to " << c << endl;
    tower(n-1,b,a,c);
}

int main(){
    int n; cin >> n;
    tower(n,'A','B','C');
    return 0;
}

// Dịch chuyển ‘N-1’ đĩa từ ‘A’ tới ‘B’, sử dụng C.
// Dịch chuyển đĩa cuối cùng từ ‘A’ tới ‘C’.
// Dịch chuyển ‘N-1’ đĩa từ ‘B’ tới ‘C’, sử dụng A.
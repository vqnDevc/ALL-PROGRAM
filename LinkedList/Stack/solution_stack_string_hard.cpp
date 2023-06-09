#include<bits/stdc++.h>
using namespace std;

int strToInt(string s) {
    stringstream ss;
    ss << s;
    int n;
    ss >> n;
    return n;
}

int main() {
    string s;
    cin >> s;
    stack<char> st;
    queue<char> q;

    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] == ']') {
            while (st.top() != '[') {
                q.push(st.top());
                st.pop();
            }
            st.pop();

            string _s = "";
            string _n = "";
            int n;

            while (!q.empty()) {
                if (q.front() >= '0' && q.front() <= '9') {
                    break;
                }

                _s = q.front() + _s;
                q.pop();
            }

            while (!q.empty()) {
                _n = q.front() + _n;
                q.pop();
            }

            if (_n == "") {
                n = 1;
            } else {
                n = strToInt(_n);
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < (int)_s.length(); j++) {
                    st.push(_s[j]);
                }
            }
        } else {
            st.push(s[i]);
        }
    }

    string res = "";
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }

    cout << res;

    return 0;
}
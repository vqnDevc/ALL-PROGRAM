#include <bits/stdc++.h>

using namespace std;

int main(){
	string s1;
	getline(cin, s1);
	stack<char>st;
	st.push(s1[0]);
	
	for(char c:s1){
		if(c != st.top()){
			st.push(c);
		}
	}
	
	string res = "";
	while(!st.empty()){
		res = st.top() + res;
		st.pop();
	}
	
	cout<<res;
    return 0;
}

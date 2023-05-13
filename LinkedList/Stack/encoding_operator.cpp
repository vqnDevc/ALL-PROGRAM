#include <bits/stdc++.h>
#include <sstream>
using namespace std;

class Solution {
public:
    
    int strToInt(string s) {
        stringstream ss;
        ss << s;
        int n;
        ss >> n;
        return n;
    }

    int calculater(queue<char> &q){
        int n = 0;
        stack<int> nums;
        stack<char> opp;

        while(!q.empty())
        {
            string _n="";
            while(!q.empty()){
                char tmp = q.front();
                if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/')
                    break;
                _n = q.front() + _n;
                q.pop();
            }
            n = strToInt(_n);
            nums.push(n);
                    
            if(!q.empty()){
                opp.push(q.front());
                q.pop();	
			}
        }
                
        int total = nums.top();
        nums.pop();
                
        while(!nums.empty()){
            char tmp = opp.top();
            opp.pop();
            switch (tmp)
            {
                case '+': total += nums.top(); break;
                case '-': total -= nums.top(); break;
                case '*': total *= nums.top(); break;
                case '/': total /= nums.top(); break;
                default: break; 
            }
            nums.pop();
        }
        return total;
    }

    void result(string str){
        stack<char> st;
        queue<char> q;

        for(char s:str){
            if(s == ')')
            {
                while(st.top()!='(')
                {
                    q.push(st.top());
                    st.pop();
                }

                st.pop();

                int total = calculater(q);
                string str = to_string(total);

                for(int i=0; i<str.length(); i++){
                    st.push(str[i]);
                }    
            }
            else
            {
                st.push(s);
            }
        }
        queue<char> q1;
        while(!st.empty()){
            q1.push(st.top());
            st.pop();
        }
        cout << calculater(q1);
    }

};

int main(int argc, char const *argv[])
{
    string str; cin>>str;
    Solution s;
    s.result(str);
    return 0;
}

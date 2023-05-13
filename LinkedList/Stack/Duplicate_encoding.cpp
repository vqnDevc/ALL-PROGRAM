#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void output(string str){
        int count = 0;
        stack<char> stack;

        for(char c:str){

            if(stack.empty()){
                stack.push(c);
                count++;
            }else{
                    if(c == stack.top()){
                        count++;
                    }else{
                        cout << stack.top() << count;
                        stack.pop();
                        stack.push(c);
                        count = 1;
                    }
            }
        }
        cout << stack.top() << count;
    }
};

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    Solution solution;
    solution.output(s);
    return 0;
}

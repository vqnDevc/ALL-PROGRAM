#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int>stack;
        unordered_map<char, char> matching {{'(',')'}, {'{','}'}, {'[',']'}};
        
        for (char c: s) {
            if (matching.find(c) != matching.end()) {
                stack.push(c);
            } else {
                if (stack.empty()) {
                    return false;
                }
                
                char previousOpening = stack.top();
                if (matching[previousOpening] != c) {
                    return false;
                }
                
                stack.pop();
            }
        }
        
        return stack.empty();
    }
};

int main(int argc, char const *argv[])
{
    string str; cin >> str;
    Solution solution;
    if(solution.isValid(str))
        cout << "Valid!!!";
    else    
        cout << "Invalid!!!";
    return 0;
}

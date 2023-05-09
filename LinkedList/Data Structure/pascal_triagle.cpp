#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output(numRows);
        for(int i=0; i<numRows; i++){
            output[i].resize(i+1, 1);
                for(int j=1; j<i; j++){
                    output[i][j] = output[i-1][j-1] + output[i-1][j];
                }
            }
        return output;
    }
};

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    vector<vector<int>> v;
    
    Solution res;
    v = res.generate(n);

    for(int i = 0; i < n; i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

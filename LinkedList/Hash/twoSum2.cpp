#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,4,45,6,10,8,7,9,12};
    int target = 16;
    vector<int> hash(17,0);
    for(int num:nums){
        if(num < target && 2*num != target){
            hash[num]++;
            hash[target-num]++;
        }
    }
    for(int i=0; i<hash.size(); i++){
        if(hash[i] > 1){
            cout << i << " " << target - i << endl;
            hash[target-i]--;
        }
    }
}
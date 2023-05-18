#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,4,45,6,10,8,7,9,12};
    unordered_set<int> set;
    unordered_map<int,int> res;
    int target = 16;

    for(int num:nums){
        set.insert(num);
    }

    for(int num:nums){
        if(num != target-num && set.find(target-num) != set.end()){
            res[num] = target-num;
            set.erase(num);
        }
    }

    for (auto i = res.begin(); i!= res.end(); i++) {
        std::cout << i->first
                  << " : "
                  << i->second << '\n';
    }
}
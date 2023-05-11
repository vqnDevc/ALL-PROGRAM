#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int num: nums) {
            counts[num]++;
        }
        
        priority_queue<pair<int, int>> heap;
        for (auto i : counts) {
            heap.push({-i.second, i.first});
            if (heap.size() > k) {
                heap.pop();
            }
        }
        
        vector<int> ans;
        while (heap.size() > 0) {
            ans.push_back(heap.top().second); heap.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    vector<int> v = {1,2,3,2,1,2,3,2,1,4,5,6,2,4};
    Solution s;
    vector<int> result = s.topKFrequent(v,4);
    for(int i:result) cout<< i << " "; 
    return 0;
}
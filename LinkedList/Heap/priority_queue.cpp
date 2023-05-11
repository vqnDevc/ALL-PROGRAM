#include <bits/stdc++.h>
using namespace std;

int main() {
    // Note: C++ priority_queue implements a max heap by default
    
    vector<int> nums = {67, 341, 234, -67, 12, -976};
    priority_queue<int> heap(nums.begin(), nums.end());
    
    heap.push(7451);
    heap.push(-5352);
    
    // The numbers will be printed in sorted order
    while (!heap.empty()) {
        cout << heap.top() << " ";
        heap.pop();
    }
}
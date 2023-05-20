#include <bits/stdc++.h>
using namespace std;

int main() {
    // Note: C++ priority_queue implements a max heap by default
    
    vector<char> nums = {'C','A','E','H','D'};
    priority_queue<char> heap(nums.begin(), nums.end());
    
    
    // The numbers will be printed in sorted order
    while (!heap.empty()) {
        cout << heap.top() << " ";
        heap.pop();
    }
}
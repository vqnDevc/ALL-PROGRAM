#include <bits/stdc++.h>

std::vector<int> longestIncreasingSubsequence(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> lis(n, 1); // Khởi tạo mảng lis với các phần tử bằng 1 ban đầu

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }

    int maxLIS = lis[0];
    int maxIndex = 0;

    // Tìm chiều dài dãy con tăng dài nhất và vị trí kết thúc của nó
    for (int i = 1; i < n; i++) {
        if (lis[i] > maxLIS) {
            maxLIS = lis[i];
            maxIndex = i;
        }
    }

    // Xây dựng dãy con tăng dài nhất
    std::vector<int> result;
    int maxLength = maxLIS;

    for (int i = maxIndex; i >= 0; i--) {
        if (lis[i] == maxLength) {
            result.push_back(nums[i]);
            maxLength--;
        }
    }

    // Đảo ngược dãy con tăng dài nhất để in ra đúng thứ tự
    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    std::cout<<"Nhap n: ";
    int n; std::cin >> n;

    std::vector<int> nums(n);
    for(int i=0; i<n; ++i) std::cin >> nums[i];
    std::vector<int> longestSubsequence = longestIncreasingSubsequence(nums);

    std::cout << "Day con tang dai nhat: ";
    // vòng for-each
    for (int num : longestSubsequence) {  
        std::cout << num << " ";
    }

    return 0;
}
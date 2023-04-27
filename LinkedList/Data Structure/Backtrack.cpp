#include <iostream>
#include <vector>

void backtrack(std::vector<int>& candidates, std::vector<int>& path, int target, int start) {
    // Nếu target đạt được (đạt được lời giải), in ra lời giải và kết thúc
    if (target == 0) {
        std::cout << "Anwser: ";
        for (int num : path) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
        return;
    }
    
    // Thử từng ứng viên trong mảng candidates
    for (int i = start; i < candidates.size(); i++) {
        // Nếu ứng viên lớn hơn target, bỏ qua
        if (candidates[i] > target) {
            continue;
        }
        
        // Thêm ứng viên vào lời giải tạm thời
        path.push_back(candidates[i]);
        
        // Gọi đệ quy để thử các ứng viên tiếp theo, bắt đầu từ vị trí hiện tại
        backtrack(candidates, path, target - candidates[i], i);
        
        // Xóa ứng viên cuối cùng khỏi lời giải tạm thời để thử ứng viên khác
        path.pop_back();
    }
}

void combinationSum(std::vector<int>& candidates, int target) {
    std::vector<int> path;
    backtrack(candidates, path, target, 0);
}

int main() {
    std::vector<int> candidates = {2, 3, 6, 7,4};
    int target = 8;

    combinationSum(candidates, target);

    return 0;
}

#include <iostream>
#include <vector>

// Hàm hỗ trợ để tìm giá trị lớn nhất trong mảng
int getMax(const std::vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Hàm thực hiện thuật toán Radix Sort
void radixSort(std::vector<int>& arr) {
    int max = getMax(arr);
    int exp = 1; // exp là cơ số (1, 10, 100, ...)
    
    std::vector<int> output(arr.size());
    
    while (max / exp > 0) {
        std::vector<int> count(10, 0); // Mảng đếm số lượng phần tử từ 0 đến 9
        
        // Tính số lần xuất hiện của mỗi hạng
        for (int i = 0; i < arr.size(); i++) {
            count[(arr[i] / exp) % 10]++;
        }
        
        // Tính toán vị trí của mỗi phần tử trong mảng output
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
        
        // Xây dựng mảng output
        for (int i = arr.size() - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }
        
        // Sao chép mảng output vào mảng gốc
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = output[i];
        }
        
        exp *= 10; // Tăng cơ số lên 10 lần
    }
}

// Hàm in ra mảng
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    std::cout << "Mang truoc khi sap xep: ";
    printArray(arr);

    radixSort(arr);

    std::cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}
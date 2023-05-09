#include <iostream>
#include <vector>

using namespace std;

void moveZerosToFront(vector<int>& nums) {
    int n = nums.size();
    int writeIndex = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] != 0) {
            nums[writeIndex--] = nums[i];
        }
    }
    while (writeIndex >= 0) {
        nums[writeIndex--] = 0;
    }
}

int main() {
    vector<int> nums = {0, 2, 0, 4, 0, 6, 0, 8, 0, 10};
    moveZerosToFront(nums);
    cout << "Hasil setelah memindahkan angka 0 ke awal vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

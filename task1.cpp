
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void removeDuplicates(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // Mengurutkan vektor
    auto last = unique(nums.begin(), nums.end()); // Menghapus duplikat
    nums.erase(last, nums.end()); // Menghapus nilai setelah duplikat
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 2, 3, 5, 6, 4, 7};
    removeDuplicates(nums);
    cout << "Hasil setelah menghapus duplikat: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
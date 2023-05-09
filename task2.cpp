#include <iostream>

using namespace std;

int countFrequency(int arr[], int n, int x) {
    int frequency = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            frequency++;
        }
    }
    return frequency;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int frequency = countFrequency(arr, n, x);
    cout << "Frekuensi angka " << x << " adalah " << frequency << endl;
    return 0;
}
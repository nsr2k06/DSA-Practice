#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Standalone function for next permutation
void nextPermutation(vector<int>& arr) {
    int n = arr.size();
    int pivot = -1;

    // Find the pivot
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            pivot = i;
            break;
        }
    }

    // If no pivot, reverse the whole array
    if (pivot == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }

    // Find rightmost successor and swap
    for (int i = n - 1; i > pivot; i--) {
        if (arr[i] > arr[pivot]) {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // Reverse the suffix
    int i = pivot + 1, j = n - 1;
    while (i < j) {
        swap(arr[i++], arr[j--]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3};

    cout << "Original: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    nextPermutation(arr);

    cout << "Next Permutation: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

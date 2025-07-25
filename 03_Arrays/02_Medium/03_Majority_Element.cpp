#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Function to find the majority element
int majorityElement(vector<int>& arr) {
    map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++) {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (arr.size() / 2)) {
            return it.first;
        }
    }

    return -1;  // No majority element
}

int main() {
    vector<int> arr;
    int n, element;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> element;
        arr.push_back(element);
    }

    int result = majorityElement(arr);

    if (result != -1) {
        cout << "Majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}

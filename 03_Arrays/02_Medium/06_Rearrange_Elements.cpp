#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, 0);

    int pi = 0; // positive index
    int ni = 1; // negative index

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            ans[ni] = arr[i];
            ni += 2;
        } else {
            ans[pi] = arr[i];
            pi += 2;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = rearrangeArray(arr);

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

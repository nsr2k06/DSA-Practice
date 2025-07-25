#include <iostream>
#include <vector>
#include <algorithm> // for max()

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                maxi = max(maxi, count);
            } else {
                count = 0;
            }
        }
        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> nums;
    int n, x;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements (0s and 1s only): ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }

    int result = sol.findMaxConsecutiveOnes(nums);
    cout << "Maximum number of consecutive 1s: " << result << endl;

    return 0;
}

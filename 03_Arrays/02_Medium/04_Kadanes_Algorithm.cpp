#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_current = nums[0];
    int max_global = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        max_current = max(nums[i], max_current + nums[i]);
        max_global = max(max_global, max_current);
    }

    return max_global;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}

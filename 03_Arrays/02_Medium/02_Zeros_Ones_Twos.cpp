#include <iostream>
#include <vector>
using namespace std;

void sortthreenums(vector<int>& nums) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) count0++;
        else if (nums[i] == 1) count1++;
        else count2++;
    }

    for (int i = 0; i < count0; i++) {
        nums[i] = 0;
    }

    for (int i = count0; i < count0 + count1; i++) {
        nums[i] = 1;
    }

    for (int i = count0 + count1; i < nums.size(); i++) {
        nums[i] = 2;
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortthreenums(nums);

    cout << "Sorted Colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

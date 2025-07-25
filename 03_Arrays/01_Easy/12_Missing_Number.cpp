#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }

    int n = nums.size();
    int total = n * (n + 1) / 2;

    return total - sum;
}

int main() {
    int n;
    cout << "Enter the number of elements (n): ";
    cin >> n;

   vector<int> nums(n);
    cout << "Enter the elements (from 0 to " << n << ", one missing):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int missing = missingNumber(nums);
    cout << "The missing number is: " << missing << endl;
    
return 0;
}
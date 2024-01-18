#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count > n / 2) {
                return nums[i];
            }
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int majority = solution.majorityElement(nums);
    if (majority != -1) {
        cout << "Majority element: " << majority << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    return 0;
}

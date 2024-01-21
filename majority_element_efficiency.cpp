#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (auto it : mpp) {
            if (it.second > (nums.size() / 2)) {
                return it.first;
            }
        }       return -1;
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

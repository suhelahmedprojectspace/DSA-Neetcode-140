#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool flag = false;
        for (int i = 0; i < nums.size(); i++) { // Corrected loop condition
            for (int j = i + 1; j < nums.size(); j++) { // Corrected loop condition
                if (nums[i] == nums[j]) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                break; // Exit outer loop if duplicate is found
            }
        }
        return flag; // Return the result
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 2}; // Example vector with duplicate
    
    if (solution.hasDuplicate(nums)) {
        printf("The array contains duplicates.\n");
    } else {
        printf("The array does not contain duplicates.\n");
    }

    return 0;
}

/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int new_index = 0;
        for(int i=0; i<nums.size(); i++){
            new_index = abs(nums[i]) - 1;

            if(nums[new_index] > 0){
                nums[new_index] *= -1;
            }
        }

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() < 3){
            return 0;
        }
        else{
            int ans1 = nums[nums.size()-1] * nums[nums.size()-2] * nums[nums.size()-3];
            int ans2 = nums[nums.size()-1] * nums[0] * nums[1];
            return max(ans1, ans2);
        }
    }
};
// @lc code=end


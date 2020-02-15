/*
 * @lc app=leetcode.cn id=453 lang=cpp
 *
 * [453] 最小移动次数使数组元素相等
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        long ans = 0, minVal = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            ans += nums[i];
            minVal = min(minVal, nums[i]);
        }

        return ans - minVal*nums.size();
    }
};
// @lc code=end


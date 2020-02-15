/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = 0, ans = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            maxSum += nums[i];
            if(maxSum > ans){
                ans = maxSum;
            }
            
            if(maxSum < 0){
                maxSum = 0;
            }
        }

        return ans;
    }
};
// @lc code=end


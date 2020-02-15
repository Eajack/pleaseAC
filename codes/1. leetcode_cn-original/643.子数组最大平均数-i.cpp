/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //
        double ans = 0, temp = 0;
        for(int i=0; i<k; i++){
            ans += nums[i];
            temp += nums[i];
        }

        for(int i=k; i<nums.size(); i++){
            temp += (nums[i] - nums[i-k]);
            ans = max(temp, ans);
        }

        return ans/k;
    }
};
// @lc code=end


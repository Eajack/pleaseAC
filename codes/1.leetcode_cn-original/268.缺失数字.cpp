/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //1-
        int s1 = 0, s2 = 0;
        for(int i=0; i<nums.size(); i++){
            s1 += (i+1);
            s2 += nums[i];
        }

        return abs(s1-s2);
    }
};
// @lc code=end


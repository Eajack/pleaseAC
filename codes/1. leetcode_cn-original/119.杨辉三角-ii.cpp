/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        //二项式系数
        vector<int> ans = {1};
        long pre = 1;

        for(int i=1; i<=rowIndex; i++){
            long cur = pre * (rowIndex-i+1)/i;
            ans.push_back((int)cur);
            pre = cur;
        }

        return ans;
    }
};
// @lc code=end


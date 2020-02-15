/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        return sqrt(2)*sqrt(0.125+n) - 0.5;
    }
};
// @lc code=end


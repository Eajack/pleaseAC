/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long r = x;
        while ( (r*r-x) > 0)
            r = (r + x/r) / 2;
        return r;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> n_b(n);
        string n_str = n_b.to_string();
        reverse(n_str.begin(), n_str.end());
        bitset<32> ans(n_str);

        return ans.to_ulong();
    }
};
// @lc code=end


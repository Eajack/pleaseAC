/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n > 0){
            ans = (char)('A'+(n-1)%26) + ans;
            n = (n-1)/26;
        }

        return ans;
    }
};
// @lc code=end


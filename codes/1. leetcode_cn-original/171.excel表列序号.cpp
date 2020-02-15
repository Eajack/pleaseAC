/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0, n = s.size();
        for(int i=0; i<n; i++){
            char ch = s[i];
            ans += ((ch - 'A') + 1) * (int)pow(26, n-1-i);
        }

        return ans;
    }
};
// @lc code=end


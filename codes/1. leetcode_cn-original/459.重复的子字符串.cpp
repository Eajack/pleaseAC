/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s+s;
        t = t.substr(1,t.size()-2);
        return t.find(s) != -1;
    }
};
// @lc code=end


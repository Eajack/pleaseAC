/*
 * @lc app=leetcode.cn id=696 lang=cpp
 *
 * [696] 计数二进制子串
 */

// @lc code=start
class Solution {
public:
    int countBinarySubstrings(string s) {
        int pre = 0, cur = 1, ans = 0;
        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                cur++;
            }
            else{
                ans += min(pre, cur);
                pre = cur;
                cur = 1;
            }
        }

        ans += min(pre, cur);
        return ans;
    }
};
// @lc code=end


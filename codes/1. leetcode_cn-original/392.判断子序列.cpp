/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cur = 0;
        for(char ch:s){
            cur = t.find(ch);
            if(cur != -1){
                t = t.substr(cur+1);
            }
            else{
                return false;
            }
        }

        return true;
    }
};
// @lc code=end


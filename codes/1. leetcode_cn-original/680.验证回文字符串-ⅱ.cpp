/*
 * @lc app=leetcode.cn id=680 lang=cpp
 *
 * [680] 验证回文字符串 Ⅱ
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(string s) {
        for(int i=0, j=s.length()-1; i<j; i++, j--){
            if(s[i] != s[j]){
                return judge(s.substr(i+1, j-i)) || judge(s.substr(i, j-i));
            }
        }

        return true;
    }

    bool judge(string s){
        for(int i=0, j=s.length()-1; i<j; i++, j--){
            if(s[i] != s[j]){
                return false;
            }
        }

        return true;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0){
            return true;
        }

        int h=0, t=s.size()-1, n=s.size();
        while(h < t){
            while(h < t && !isalnum(s[h])){
                h++;
            }
            while(h < t && !isalnum(s[t])){
                t--;
            }

            if(tolower(s[h++]) != tolower(s[t--])){
                return false;
            }
        }

        return true;
    }
};
// @lc code=end


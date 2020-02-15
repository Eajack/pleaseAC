/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        if(s.size() <= 1){
            return s;
        }

        string k = "aeiouAEIOU";
        int i=0, j=s.size()-1;
        char t;
        while(i < j){
            while(i <= s.size()-1 && k.find(s[i]) == -1){
                i++;
            }
            while(j >= 0 && k.find(s[j]) == -1){
                j--;
            }
            
            if(i < j){
                swap(s[i++], s[j--]);
            }
        }

        return s;
    }
};
// @lc code=end


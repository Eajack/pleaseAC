/*
 * @lc app=leetcode.cn id=709 lang=cpp
 *
 * [709] 转换成小写字母
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string str) {
        string ans = "";
        for(char ch:str){
            if('A' <= ch && ch <= 'Z'){
                ans += (ch + ('a'-'A'));
            }
            else{
                ans += ch;
            }
        }

        return ans;
    }
};
// @lc code=end


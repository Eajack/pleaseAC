/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_ch = 0, t_ch = 0;
        for(char ch:s){
            s_ch += ch;
        }
        for(char ch:t){
            t_ch += ch;
        }

        return (char)(abs(s_ch - t_ch));   
    }
};
// @lc code=end


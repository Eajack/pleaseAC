/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() <= 1){
            return;
        }

        int i=0, j=s.size()-1;
        char t;
        while(i < j){
            t = s[i];
            s[i] = s[j];
            s[j] = t;

            i++;
            j--;
        }
    }
};
// @lc code=end


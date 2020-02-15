/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        else if(x == 0){
            return true;
        }
        else{
            string x_str = to_string(x);
            int i=0, j=x_str.size()-1;
            while(i <= j){
                if(x_str[i] != x_str[j]){
                    return false;
                }
                else{
                    i++;
                    j--;
                }
            }

            return true;
        }
    }
};
// @lc code=end


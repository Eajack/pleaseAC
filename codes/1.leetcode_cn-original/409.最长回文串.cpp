/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        int count[128] = {0};
        for(char ch:s){
            count[ch]++;
        }

        int ans = 0;
        for(int c:count){
            ans += (c/2*2);
            if(c%2 == 1 && ans%2 == 0){
                ans++;
            }
        }

        return ans;
    }
};
// @lc code=end


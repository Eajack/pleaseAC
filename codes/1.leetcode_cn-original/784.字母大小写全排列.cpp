/*
 * @lc app=leetcode.cn id=784 lang=cpp
 *
 * [784] 字母大小写全排列
 */

// @lc code=start
class Solution {
public:
    void helper(string s, int i, vector<string>& ans){
        if(i == s.size()){
            ans.push_back(s);
            return;
        }

        if(!isalpha(s[i])){
            helper(s, i+1, ans);
        }
        else{
            s[i] = tolower(s[i]);
            helper(s, i+1, ans);
            s[i] = toupper(s[i]);
            helper(s, i+1, ans);
        }
    }
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        helper(S, 0, ans);
        return ans;
    }
};
// @lc code=end


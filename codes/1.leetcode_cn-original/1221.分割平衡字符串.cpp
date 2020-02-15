/*
 * @lc app=leetcode.cn id=1221 lang=cpp
 *
 * [1221] 分割平衡字符串
 */

// @lc code=start
class Solution {
public:
    int balancedStringSplit(string s) {
        vector<char> stack;
        int ans = 0;

        for(char ch:s){
            if(stack.size() == 0){
                stack.push_back(ch);
            }
            else if(stack.back() != ch){
                stack.pop_back();
            }
            else{
                stack.push_back(ch);
            }

            if(stack.size() == 0){
                ans++;
            }
        }

        return ans;
    }
};
// @lc code=end


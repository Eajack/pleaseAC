/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ans;
        for(int a:A){
            nums.push_back(a*a);
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end


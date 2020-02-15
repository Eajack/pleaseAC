/*
 * @lc app=leetcode.cn id=852 lang=cpp
 *
 * [852] 山脉数组的峰顶索引
 */

// @lc code=start
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        auto it = max_element(A.begin(), A.end());
        int index = distance(A.begin(), it);
        return index;
    }
};
// @lc code=end


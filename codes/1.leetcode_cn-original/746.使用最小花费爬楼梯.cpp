/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        vector<int> f(size, 0);

        f[0] = cost[0];
        f[1] = cost[1];

        for(int i=2; i<size; i++){
            f[i] = min(f[i-1], f[i-2]) + cost[i];
        }

        return min(f[size-1], f[size-2]);
    }
};
// @lc code=end


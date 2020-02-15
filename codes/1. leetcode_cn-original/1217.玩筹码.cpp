/*
 * @lc app=leetcode.cn id=1217 lang=cpp
 *
 * [1217] 玩筹码
 */

// @lc code=start
class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int odd = 0, even = 0;
        for(int c:chips){
            if(c%2 == 1){
                odd++;
            }
            else{
                even++;
            }
        }

        return min(odd, even);
    }
};
// @lc code=end


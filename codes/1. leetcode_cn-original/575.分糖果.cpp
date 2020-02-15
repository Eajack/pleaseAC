/*
 * @lc app=leetcode.cn id=575 lang=cpp
 *
 * [575] 分糖果
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        //1
        map<int, int> m;
        int cnt = 0;
        for(int c:candies){
            m[c]++;
            cnt++;
        }

        return min(cnt/2, m.size());
    }
};
// @lc code=end


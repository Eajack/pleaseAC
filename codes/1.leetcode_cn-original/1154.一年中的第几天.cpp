/*
 * @lc app=leetcode.cn id=1154 lang=cpp
 *
 * [1154] 一年中的第几天
 */

// @lc code=start
class Solution {
public:
    map<int, int> days = {
        {1, 31},
        {2, 28},
        {3, 31},
        {4, 30},
        {5, 31},
        {6, 30},
        {7, 31},
        {8, 31},
        {9, 30},
        {10, 31},
        {11, 30},
        {12, 31}
    };
    int dayOfYear(string date) {
        int ans = 0;
        int y = stoi(date.substr(0, 4)), m = stoi(date.substr(5, 2)), \
            d = stoi(date.substr(8, 2));
        if( (y%4 == 0 && y%100 != 0) || y%400 == 0 ){
            days[2]++;
        }

        for(int i=1; i<=m-1; i++){
            ans += days[i];
        }
        ans += d;
        return ans;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=1037 lang=cpp
 *
 * [1037] 有效的回旋镖
 */

// @lc code=start
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        //1
        string s1 = to_string(points[0][0]) + to_string(points[0][1]),\
               s2 = to_string(points[1][0]) + to_string(points[1][1]),\
               s3 = to_string(points[2][0]) + to_string(points[2][1]);
        if(s1 == s2 || s2 == s3){
            return false;
        }

        //2
        if( (points[0][1] == points[1][1] && points[1][1] == points[2][1]) || \
            (points[0][0] == points[1][0] && points[1][0] == points[2][0]) ){
            return false;
        }

        double k1 = (double)(points[0][1] - points[1][1]) / (points[0][0] - points[1][0]), \
               k2 = (double)(points[1][1] - points[2][1]) / (points[1][0] - points[2][0]);
        if(abs(k1-k2) <= 1e-5){
            return false;
        }

        return true;
    }
};
// @lc code=end
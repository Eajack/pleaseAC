/*
 * @lc app=leetcode.cn id=836 lang=cpp
 *
 * [836] 矩形重叠
 */

// @lc code=start
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int col1 = abs(rec1[0] - rec1[2]), row1 = abs(rec1[1] - rec1[3]);
        int col2 = abs(rec2[0] - rec2[2]), row2 = abs(rec2[1] - rec2[3]);
        int x_c1 = rec1[0] + col1/2, y_c1 = rec1[1] + row1/2;
        int x_c2 = rec2[0] + col2/2, y_c2 = rec2[1] + row2/2;

        int x_dis = abs(x_c1 - x_c2), y_dis = abs(y_c1 - y_c2);
        if( (x_dis < (col1/2+col2/2)) && (y_dis < (row1/2+row2/2)) ){
            return true;
        }
        else{
            return false;
        }
        
    }
};
// @lc code=end


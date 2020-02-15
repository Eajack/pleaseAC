/*
 * @lc app=leetcode.cn id=766 lang=cpp
 *
 * [766] 托普利茨矩阵
 */

// @lc code=start
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rowNum = matrix.size(), colNum = matrix[0].size();
        if(rowNum == 0 && colNum == 0){
            return false;
        }

        //行
        for(int i=0; i<rowNum; i++){
            int temp = matrix[i][0];
            int j = 0, i_temp = i;

            while(++i_temp < rowNum && ++j < colNum){
                if(matrix[i_temp][j] != temp){
                    return false;
                }
            }
        }

        //列
        for(int j=1; j<colNum; j++){
            int temp = matrix[0][j];
            int i = 0, j_temp = j;

            while(++i < rowNum && ++j_temp < colNum){
                if(matrix[i][j_temp] != temp){
                    return false;
                }
            }
        }

        return true;
    }
};
// @lc code=end


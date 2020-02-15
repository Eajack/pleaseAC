/*
 * @lc app=leetcode.cn id=661 lang=cpp
 *
 * [661] 图片平滑器
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> d = {
        {1,0},
        {-1,0},
        {0,1},
        {0,-1},
        {-1,-1},
        {-1,1},
        {1,-1},
        {1,1}
    };
    vector<vector<int>> M_temp;

    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        M_temp = M;
        int row = M.size(), col = M[0].size();
        if(row == 0 && col == 0){
            return M;
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                int sum = M[i][j], cnt = 1;
                for(vector<int> k:d){
                    int I = i + k[0], J = j + k[1];
                    if(0 <= I && I < row && 0 <= J && J < col){
                        sum += M[I][J];
                        cnt++;
                    }
                }
                M_temp[i][j] = sum/cnt;
            }
        }

        return M_temp;
    }
};
// @lc code=end


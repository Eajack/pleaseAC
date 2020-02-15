/*
 * @lc app=leetcode.cn id=832 lang=cpp
 *
 * [832] 翻转图像
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        //1
        int row = A.size(), col = A[0].size();

        //2
        for(int i=0; i<row; i++){
            reverse (A[i].begin(), A[i].end());
        }

        //3
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                A[i][j] = (A[i][j] == 0)?(1):(0);
            }
        }

        return A;
    }
};
// @lc code=end


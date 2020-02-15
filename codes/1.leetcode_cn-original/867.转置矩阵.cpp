/*
 * @lc app=leetcode.cn id=867 lang=cpp
 *
 * [867] 转置矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> ans;
        if(A.size() <= 0){
            return ans;
        }

        //1
        int r = A.size(), c = A[0].size();
        for(int j=0; j<c; j++){
            vector<int> col;
            for(int i=0; i<r; i++){
                col.push_back(A[i][j]);
            }
            ans.push_back(col);
        }

        return ans;
    }
};
// @lc code=end


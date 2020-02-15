/*
 * @lc app=leetcode.cn id=883 lang=cpp
 *
 * [883] 三维形体投影面积
 */

// @lc code=start
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0, row = grid.size(), col = grid[0].size();
        for(int i=0; i<row; i++){
            //前视
            ans += *max_element(grid[i].begin(), grid[i].end());
            for(int j=0; j<col; j++){
                //俯视
                if(grid[i][j] > 0){
                    ans++;
                }
            }
        }

        for(int j=0; j<col; j++){
            //侧视
            vector<int> c;
            for(int i=0; i<col; i++){
                c.push_back(grid[i][j]);
            }
            ans += *max_element(c.begin(), c.end());
        }

        return ans;
    }
};
// @lc code=end


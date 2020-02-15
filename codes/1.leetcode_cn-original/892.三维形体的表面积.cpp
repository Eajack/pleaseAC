/*
 * @lc app=leetcode.cn id=892 lang=cpp
 *
 * [892] 三维形体的表面积
 */

// @lc code=start
class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        //1
        int cnt = 0, sameCnt = 0;
        int r = grid.size(), c = grid[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cnt += grid[i][j];
                //计算共面cnt
                sameCnt += (grid[i][j] <= 0)?(0):(2*(grid[i][j] - 1));
                if(j-1 >= 0){
                    sameCnt += min(grid[i][j], grid[i][j-1]);
                }
                if(j+1 < c){
                    sameCnt += min(grid[i][j], grid[i][j+1]);
                }
                if(i-1 >= 0){
                    sameCnt += min(grid[i][j], grid[i-1][j]);
                }
                if(i+1 < r){
                    sameCnt += min(grid[i][j], grid[i+1][j]);
                }
            }
        }

        //2
        //cout << cnt << " " << sameCnt << endl;
        int ans = 0;
        if(cnt != 0){
            ans = cnt * 6 - sameCnt;
        }

        return ans;
    }
};
// @lc code=end


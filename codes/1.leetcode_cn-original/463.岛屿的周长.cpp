/*
 * @lc app=leetcode.cn id=463 lang=cpp
 *
 * [463] 岛屿的周长
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int x = grid.size(), y = grid[0].size();
        int ans = 0;
        vector<vector<int>> d{
            {-1,0},
            {1,0},
            {0,-1},
            {0,1}
        };

        //1
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                if(grid[i][j] == 1){
                    ans++;
                }
            }
        }

        //2-
        int cnt = 0;
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                if(grid[i][j] == 1){
                    for(int k=0; k<d.size(); k++){
                        if(grid[i+d[k][0]][j+d[k][1]] == 1){
                            cnt++;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
        cout << cnt << endl;
        return ans-cnt*2;
    }
};
// @lc code=end


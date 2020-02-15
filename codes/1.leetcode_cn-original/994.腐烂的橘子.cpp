/*
 * @lc app=leetcode.cn id=994 lang=cpp
 *
 * [994] 腐烂的橘子
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> m;
    vector<vector<int>> d = {
        {0,1},
        {0,-1},
        {1,0},
        {-1,0}
    };

    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        if(row <= 0 && col <= 0){
            return 0;
        }
        
        //1
        for(int i=1; i<=row; i++){
            vector<int> r(col, 0);
            m.push_back(r);
        }

        //2
        int pre = -1, cur = 0;
        int time = 0;
        while(pre != cur){
            if(h(grid)){
                break;
            }
            else{
                time++;
            }

            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    if(grid[i][j] == 2){
                        for(vector<int> v:d){
                            if(0 <= i+v[0] && i+v[0] < row && \
                                0 <= j+v[1] && j+v[1] < col ){
                                grid[i+v[0]][j+v[1]] = 2;
                            }
                        }
                        m[i][j] = 1;
                    }
                }
            }
            pre = cur;
            cur = f();
        }

        return time;
    }

    int f(void){
        int ans = 0;
        int row = m.size(), col = m[0].size();
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                ans += m[i][j];
            }
        }

        return ans;
    }

    bool h(vector<vector<int>>& grid){
        int row = grid.size(), col = grid[0].size();
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == 1){
                    return false;
                }
            }
        }

        return true;
    }
};
// @lc code=end


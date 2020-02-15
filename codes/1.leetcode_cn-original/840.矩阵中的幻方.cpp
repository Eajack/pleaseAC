class Solution {
public:
    bool isAll9(vector<vector<int>>& grid, int x, int y){
        map<int, int> m;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if( grid[x+i][y+j] >=1 && grid[x+i][y+j] <=9 &&\
                     m.find(grid[x+i][y+j]) == m.end() ){
                    m[grid[x+i][y+j]] = 1;
                }
                else{
                    return false;
                }
            }
        }

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rowNum = grid.size(), colNum = grid[0].size();
        if(rowNum < 3 || colNum < 3){
            return 0;
        }

        int ans = 0, sum = 0;
        for(int i=0; i<rowNum; i++){
            for(int j=0; j<colNum; j++){
                if(i+2 < rowNum && j+2 < colNum){
                    //判断换方
                    //1- 1~9
                    if(isAll9(grid, i, j)){
                        //2- 
                        sum = grid[i][j]+grid[i][j+1]+grid[i][j+2];
                        if( sum == grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j+2] &&\
                            sum == grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2] &&\
                            sum == grid[i][j]+grid[i+1][j]+grid[i+2][j] &&\
                            sum == grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1] &&\
                            sum == grid[i][j+2]+grid[i+1][j+2]+grid[i+2][j+2] &&\
                            sum == grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2] &&\
                            sum == grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]
                        ){
                            ans++;
                        }
                    }
                }
            }
        }

        return ans;
    }
};
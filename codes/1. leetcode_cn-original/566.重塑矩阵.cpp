/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        //1
        if(r <= 0 || c <= 0){
            return nums;
        }

        //2
        int r0 = nums.size(), c0 = nums[0].size();
        if(r0*c0 != r*c){
            return nums;
        }

        //3
        vector<vector<int>> ans;
        int i0 = 0, j0 = 0;
        for(int i=0; i<r; i++){
            vector<int> row;
            for(int j=0; j<c; j++){
                if(i0 < r0 && j0 < c0){
                    row.push_back(nums[i0][j0]);
                }

                //increment
                if(j0 + 1 < c0){
                    j0++;
                }
                else{
                    i0++;
                    j0 = 0;
                    if(i0 > r0){
                        break;
                    }
                }
            }
            ans.push_back(row);
        }

        return ans;
    }
};
// @lc code=end


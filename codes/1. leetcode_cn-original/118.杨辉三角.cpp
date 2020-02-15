/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows <= 0){
            return ans;
        }
        else if(numRows == 1){
            ans.push_back({1});
            return ans;
        }
        else if(numRows == 2){
            ans.push_back({1});
            ans.push_back({1,1});
            return ans;
        }
        else{
            ans.push_back({1});
            ans.push_back({1,1});
            vector<int> lastLine = {1,1};

            for(int i=3; i<=numRows; i++){
                vector<int> line = {1};
                int index1 = 0, index2 = 1;
                for(int j=1; j<i-1; j++){
                    line.push_back(lastLine[index1++] + lastLine[index2++]);
                }
                line.push_back(1);

                lastLine.clear();
                for(int i=0; i<line.size(); i++){
                    lastLine.push_back(line[i]);
                }
                ans.push_back(line);
            }

            return ans;
        }
    }
};
// @lc code=end


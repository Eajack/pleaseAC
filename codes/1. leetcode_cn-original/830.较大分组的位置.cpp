/*
 * @lc app=leetcode.cn id=830 lang=cpp
 *
 * [830] 较大分组的位置
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> ans;
        if(S.size() <= 2){
            return ans;
        }

        //1
        int i = 0, j = 1;
        while(i <  S.size()){
            while(j < S.size() && S[i] == S[j]){
                j++;
            }

            if(j - i >= 3){
                vector<int> temp{i, j-1};
                ans.push_back(temp);
            }
            
            if(j < S.size()){
                i = j;
                j++;
            }
            else{
                break;
            }
        }

        return ans;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=1200 lang=cpp
 *
 * [1200] 最小绝对差
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        //1
        int m = INT_MAX;
        for(int i=0; i<arr.size()-1; i++){
            m = min(m, arr[i+1]-arr[i]);
        }

        //2
        vector<vector<int>> vals;
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i+1]-arr[i] == m){
                vals.push_back({arr[i], arr[i+1]});
            }
        }

        return vals;
    }
};
// @lc code=end


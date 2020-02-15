/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        vector<int> ans;
        int target = INT_MAX;
        for(int i=1; i<=nums.size(); i++){
            if(m.find(i) == m.end()){
                target = i;
            }
            else if(m[i] > 1){
                ans.push_back(i);
            }
        }
        if(target != INT_MAX){
            ans.push_back(target);
        }

        return ans; 
    }
};
// @lc code=end


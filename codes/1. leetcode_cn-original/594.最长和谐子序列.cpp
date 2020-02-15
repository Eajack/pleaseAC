/*
 * @lc app=leetcode.cn id=594 lang=cpp
 *
 * [594] 最长和谐子序列
 */

// @lc code=start
class Solution {
public:
    int findLHS(vector<int>& nums) {
        //1
        map<int,int> m;
        for(int n:nums){
            m[n]++;
        }

        //2
        int ans = 0, temp = 0;
        for(auto iter=m.begin(); iter!=m.end(); iter++){
            if(m.find(iter->first + 1) != m.end()){
                temp = m[iter->first] + m[iter->first + 1];
                ans = max(ans, temp);
            }
        }

        return ans;
    }
};
// @lc code=end


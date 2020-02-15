/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>m;
        for(int num:nums){
            if(m.find(num) != m.end()){
                return true;
            }
            else{
                m[num] = 1;
            }
        }

        return false;
    }
};
// @lc code=end


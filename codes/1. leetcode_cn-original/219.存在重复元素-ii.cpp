/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //1-
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                return true;
            }
            m[nums[i]] = 1;
            if(m.size() > k){
                m.erase(nums[i-k]);
            }
        }

        return false;
    }
};
// @lc code=end


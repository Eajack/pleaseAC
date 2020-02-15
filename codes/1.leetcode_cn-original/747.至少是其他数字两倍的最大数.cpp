/*
 * @lc app=leetcode.cn id=747 lang=cpp
 *
 * [747] 至少是其他数字两倍的最大数
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto it = max_element(nums.begin(), nums.end());
        int maxVal = *it;
        int ans = distance(nums.begin(), it);

        for(int i=0; i<nums.size(); i++){
            if(maxVal != nums[i] && maxVal < nums[i]*2){
                return -1;
            }
        }

        return ans;
    }
};
// @lc code=end


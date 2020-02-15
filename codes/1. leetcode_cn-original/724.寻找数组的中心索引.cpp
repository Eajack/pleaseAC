/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心索引
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() <= 0){
            return -1;
        }

        int l, r;
        for(int i=0; i<nums.size(); i++){
            l = 0;
            r = 0;
            for(int j=0; j<i; j++){
                l += nums[j];
            }
            for(int j=i+1; j<nums.size(); j++){
                r += nums[j];
            }
            if(l == r){
                return i;
            }
        }

        return -1;
    }
};
// @lc code=end


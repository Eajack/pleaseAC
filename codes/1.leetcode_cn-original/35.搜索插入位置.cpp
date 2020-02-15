/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1, middle = 0;
        while(left <= right){
            middle = (left+right)/2;
            if(nums[middle] == target){
                return middle;
            }
            else if(nums[middle] < target){
                left = middle+1;
            }
            else if(nums[middle] > target){
                right = middle-1;
            }
        }

        return max(left,right);
    }
};
// @lc code=end


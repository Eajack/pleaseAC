/*
 * @lc app=leetcode.cn id=674 lang=cpp
 *
 * [674] 最长连续递增序列
 */

// @lc code=start
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        
        //1
        int j = 0, ans = 1, temp = 0;
        for(int i=0; i<nums.size()-1; i++){
            j = i+1;
            if(nums[i] < nums[j]){
                temp = 1;
                while(j < nums.size() && nums[i] < nums[j]){
                    i++;
                    j++;
                    temp++;
                }
                ans = max(ans, temp);
            }
        }

        return ans;
    }
};
// @lc code=end


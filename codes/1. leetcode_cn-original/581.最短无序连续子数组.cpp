/*
 * @lc app=leetcode.cn id=581 lang=cpp
 *
 * [581] 最短无序连续子数组
 */

// @lc code=start
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> n = nums;
        sort(n.begin(), n.end());

        int start = nums.size()-1, end = 0;
        for(int i=0; i<nums.size(); i++){
            if(n[i] != nums[i]){
                start = min(start, i);
                end = max(end, i);
            }
        }

        return (end - start > 0)?(end - start + 1):(0);
    }
};
// @lc code=end


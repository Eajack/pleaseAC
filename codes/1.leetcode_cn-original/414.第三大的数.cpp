/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //去重
        vector<int> nums1;
        for(int n:nums){
            if(find(nums1.begin(), nums1.end(), n) == nums1.end()){
                nums1.push_back(n);
            }
        }

        if(nums1.size() < 3){
            return *max_element(nums1.begin(), nums1.end());
        }

        sort(nums1.begin(), nums1.end(), greater<>());
        return nums1[2];
    }
};
// @lc code=end


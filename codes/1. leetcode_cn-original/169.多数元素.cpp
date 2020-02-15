/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(int num:nums){
            m[num]++;
        }

        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second > nums.size()/2){
                return it->first;
            }
        }

        return -1;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=697 lang=cpp
 *
 * [697] 数组的度
 */

// @lc code=start
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        //1
        map<int, int> m;
        for(int n:nums){
            m[n]++;
        }

        int degree = 0;
        for(auto it=m.begin(); it!=m.end(); it++){
            degree = max(degree, it->second);
        }

        //2
        int l = 0, r = 0, ans = nums.size();
        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second == degree){
                l = nums.size()-1, r = 0;
                for(int i=0; i<nums.size(); i++){
                    if(nums[i] == it->first){
                        l = min(l, i);
                        r = max(r, i);
                    }
                }
                if(r >= l){
                    ans = min(ans, r-l+1);
                }
            }
        }

        return ans;
    }
};
// @lc code=end


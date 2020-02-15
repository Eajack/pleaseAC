/*
 * @lc app=leetcode.cn id=532 lang=cpp
 *
 * [532] 数组中的K-diff数对
 */

// @lc code=start
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        //1
        if(k == 0){
            int ans = 0;
            map<int,int> m;
            for(int i=0; i<nums.size(); i++){
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[i] == nums[j] && m.find(nums[i]) == m.end()){
                        m[nums[i]] = -1;
                        ans++;
                    }
                }
            }

            return ans;
        }
        else{
            //2
            vector<int> nums_new;
            for(int n:nums){
                if(find(nums_new.begin(), nums_new.end(), n) == nums_new.end()){
                    nums_new.push_back(n);
                }
            }

            //2
            int ans = 0;
            if(nums_new.size() < 1){
                return 0;
            }
            else{
                for(int i=0; i<nums_new.size(); i++){
                    for(int j=i+1; j<nums_new.size(); j++){
                        if(abs(nums_new[i] - nums_new[j]) == k){
                            ans++;
                        }
                    }
                }
            }

            return ans;
        }
    }
};
// @lc code=end


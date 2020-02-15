/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //1
        string s = "";
        int i = 0;
        while(i < nums.size() && nums[i] != 1){
            i++;
        }

        //2
        if(i >= nums.size()){
            return 0;
        }
        else{
            int j = i + 1;
            int ans = 1, temp = 1;
            while(i < nums.size() && j < nums.size()){
                //i
                while(i < nums.size() && nums[i] != 1){
                    i++;
                }
                j = i + 1;

                //j
                while(j < nums.size() && nums[j] == 1){
                    j++;
                    temp++;
                }

                //
                ans = max(ans, temp);
                temp = 1;
                i = j;
                j++;
            }

            return ans;
        }
    }
};
// @lc code=end


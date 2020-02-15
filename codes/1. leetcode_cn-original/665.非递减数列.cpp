/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */

// @lc code=start
class Solution {
public:
    bool helper(vector<int>& A){
        for(int i=0; i<A.size()-1; i++){
            if(A[i] > A[i+1]){
                return false;
            }
        }

        return true;
    }
    bool checkPossibility(vector<int>& nums) {
        //1
        if(nums.size() == 0){
            return false;
        }
        else if(nums.size() == 1){
            return true;
        }

        //2
        if(helper(nums)){
            return true;
        }

        int temp = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                //2.1
                temp = nums[i];
                nums[i] = (i > 0)?(nums[i-1]):(nums[i+1]);

                if(helper(nums)){
                    return true;
                }
                
                nums[i] = temp;
                //2.2
                temp = nums[i+1];
                nums[i+1] = nums[i];

                if(helper(nums)){
                    return true;
                }
                
                nums[i+1] = temp;                
            }
        }

        return false;
    }
};
// @lc code=end


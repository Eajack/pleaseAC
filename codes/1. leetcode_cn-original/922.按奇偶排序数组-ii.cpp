/*
 * @lc app=leetcode.cn id=922 lang=cpp
 *
 * [922] 按奇偶排序数组 II
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i = 0, j = 1;
        while(i < A.size() && j < A.size()){
            while(i < A.size() && A[i]%2 == 0 ){
                i += 2;
            }
            while(j < A.size() && A[j]%2 == 1 ){
                j += 2;
            }

            if(i < A.size() && j < A.size()){
                swap(A[i], A[j]);
            }
        }   

        return A;        
    }
};
// @lc code=end


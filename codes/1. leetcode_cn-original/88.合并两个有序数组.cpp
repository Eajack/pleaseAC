/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //1- copy
        vector<int> temp = nums1;

        //2-
        int i=0, j=0, k=0;
        int minVal = 0;
        while(i < m && j < n){
            if(temp[i] <= nums2[j]){
                minVal = temp[i++];
            }
            else{
                minVal = nums2[j++];
            }
            //cout << minVal << endl;
            nums1[k++] = minVal;
        }

        //3-
        while(i < m){
            nums1[k++] = temp[i++];
        }
        while(j < n){
            nums1[k++] = nums2[j++];
        }
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() <= 0){
            return nullptr;
        }

        //1-
        int mid = nums.size()/2;
        TreeNode* root = new TreeNode(nums[mid]);

        //2-
        vector<int> leftNums, rightNums;
        for(int i=0; i<nums.size(); i++){
            if(i < mid){
                leftNums.push_back(nums[i]);
            }
            if(i > mid){
                rightNums.push_back(nums[i]);
            }
        }

        //3-
        root->left = sortedArrayToBST(leftNums);
        root->right = sortedArrayToBST(rightNums);

        return root;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans = 0;
        if(root->left && !root->left->left && \
            !root->left->right){
            ans += root->left->val;
        }

        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right) + ans;
    }
};
// @lc code=end


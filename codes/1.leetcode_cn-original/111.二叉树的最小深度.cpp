/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }

        //1-
        if(!root->left && !root->right){
            return 1;
        }

        //2-
        int leftMin = minDepth(root->left);
        int rightMin = minDepth(root->right);
        if(!root->left || !root->right){
            return leftMin + rightMin + 1;
        }

        //3-
        return min(leftMin, rightMin) + 1;
    }
};
// @lc code=end


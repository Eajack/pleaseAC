/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool helper(TreeNode* r1, TreeNode* r2){
        if(!r1 && !r2){
            return true;
        }

        if(!r1 || !r2){
            return false;
        }

        return (r1->val==r2->val) && \
            helper(r1->left, r2->right) && \
            helper(r1->right, r2->left);
    }

    bool isSymmetric(TreeNode* root) {
        bool flag = helper(root, root);
        return flag;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
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
    int ans = 0;

    int depth(TreeNode* root){
        if(!root){
            return 0;
        }

        int l = depth(root->left);
        int r = depth(root->right);
        ans = max(ans, l+r);

        return max(l, r) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return ans;
    }
};
// @lc code=end


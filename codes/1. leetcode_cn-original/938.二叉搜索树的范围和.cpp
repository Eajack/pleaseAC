/*
 * @lc app=leetcode.cn id=938 lang=cpp
 *
 * [938] 二叉搜索树的范围和
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
    void preOrder(TreeNode* root, int L, int R){
        if(!root){
            return;
        }

        if(L <= root->val && root->val <= R){
            ans += root->val;
        }
        preOrder(root->left, L, R);
        preOrder(root->right, L, R);
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        preOrder(root, L, R);
        return ans;
    }
};
// @lc code=end


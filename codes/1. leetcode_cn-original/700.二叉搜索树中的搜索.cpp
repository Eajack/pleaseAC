/*
 * @lc app=leetcode.cn id=700 lang=cpp
 *
 * [700] 二叉搜索树中的搜索
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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans = nullptr;
        if(!root){
            return ans;
        }

        if(root->val == val){
            ans = root;
        }
        else if(val < root->val){
            ans = searchBST(root->left, val);
        }
        else{
            ans = searchBST(root->right, val);
        }

        return ans;
    }
};
// @lc code=end


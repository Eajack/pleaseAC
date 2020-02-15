/*
 * @lc app=leetcode.cn id=965 lang=cpp
 *
 * [965] 单值二叉树
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
    void preOrder(TreeNode* root, map<int,int>& vals){
        if(!root){
            return;
        }

        vals[root->val]++;
        preOrder(root->left, vals);
        preOrder(root->right, vals);
    }
    bool isUnivalTree(TreeNode* root) {
        map<int,int> vals;
        preOrder(root, vals);
        if(vals.size() == 1){
            return true;
        }
        else{
            return false;
        }
    }
};
// @lc code=end


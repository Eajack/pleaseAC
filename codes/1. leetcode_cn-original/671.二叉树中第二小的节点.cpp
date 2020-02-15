/*
 * @lc app=leetcode.cn id=671 lang=cpp
 *
 * [671] 二叉树中第二小的节点
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
    void preOrder(TreeNode* root, vector<int>& vals){
        if(!root){
            return;
        }

        if(find(vals.begin(), vals.end(), root->val) == vals.end()){
            vals.push_back(root->val);
        }

        if(root->left){
            preOrder(root->left, vals);
        }
        if(root->right){
            preOrder(root->right, vals);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> vals;
        preOrder(root, vals);
        if(vals.size() <= 1){
            return -1;
        }
        else{
            sort(vals.begin(), vals.end());
            return vals[1];
        }
    }
};
// @lc code=end


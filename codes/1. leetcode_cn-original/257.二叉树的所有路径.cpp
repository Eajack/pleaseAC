/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    void DFS(TreeNode *root, vector<string>& paths, string path){
        if(!root->left && !root->right){
            paths.push_back(path);
        }

        if(root->left){
            DFS(root->left, paths, path+"->"+to_string(root->left->val));
        }
        if(root->right){
            DFS(root->right, paths, path+"->"+to_string(root->right->val));
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(!root){
            return {};
        }
        DFS(root, ans, ""+to_string(root->val));

        return ans;
    }
};
// @lc code=end


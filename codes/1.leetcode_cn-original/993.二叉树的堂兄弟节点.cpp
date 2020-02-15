/*
 * @lc app=leetcode.cn id=993 lang=cpp
 *
 * [993] 二叉树的堂兄弟节点
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
    map<int, int> depth;
    map<int, TreeNode*> parent;
    void dfs(TreeNode* root, TreeNode* par){
        if(root){
            depth[root->val] = (!par)?(1 + depth[par->val]):(0);
            parent[root->val] = par;
            dfs(root->left, root);
            dfs(root->right, root);
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        //1
        dfs(root, nullptr);

        //2
        return (depth[x] == depth[y] && parent[x] != parent[y]);
    }
};
// @lc code=end


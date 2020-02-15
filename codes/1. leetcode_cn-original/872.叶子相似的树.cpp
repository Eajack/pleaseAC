/*
 * @lc app=leetcode.cn id=872 lang=cpp
 *
 * [872] 叶子相似的树
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
    void getLeaves(TreeNode* root, string& l){
        if(!root){
            return;
        }

        if(!root->left && !root->right){
            l += to_string(root->val);
        }

        if(root->left){
            getLeaves(root->left, l);
        }
        if(root->right){
            getLeaves(root->right, l);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string l1 = "", l2 = "";
        getLeaves(root1, l1);
        getLeaves(root2, l2);

        if(l1 == l2){
            return true;
        }
        else{
            return false;
        }
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=687 lang=cpp
 *
 * [687] 最长同值路径
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
    int longestUnivaluePath(TreeNode* root) {
        arrowLength(root);
        return ans;
    }

    int arrowLength(TreeNode* root){
        if(!root){
            return 0;
        }

        int l = arrowLength(root->left), r = arrowLength(root->right);
        int aL = 0, aR = 0;
        if(root->left && root->left->val == root->val){
            aL = l + 1;
        }
        if(root->right && root->right->val == root->val){
            aR = r + 1;
        }

        ans = max(ans, aL+aR);
        return max(aR, aL);
    }
};
// @lc code=end


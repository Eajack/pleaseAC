/*
 * @lc app=leetcode.cn id=437 lang=cpp
 *
 * [437] 路径总和 III
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
    int pathSum(TreeNode* root, int sum) {
        if (root == nullptr) {
            return 0;
        }

        return paths(root, sum) 
                + pathSum(root->left, sum) 
                + pathSum(root->right, sum);        
    }

    int paths(TreeNode* root, int sum) {
        if (root == nullptr) {
            return 0;
        }

        int res = 0;
        if (root->val == sum) {
            res += 1;
        }
        
        res += paths(root->left, sum - root->val);
        res += paths(root->right, sum - root->val);
        
        return res;
    }
};
// @lc code=end


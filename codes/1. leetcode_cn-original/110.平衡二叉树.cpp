/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    int getDepth(TreeNode* root){
        if(!root){
            return 0;
        }

        int leftDepth = getDepth(root->left);
        int rightDepth = getDepth(root->right);

        return 1 + max(leftDepth, rightDepth);
    }

    bool isBalanced1(TreeNode* root) {
        if(!root){
            return true;
        }

        return abs(getDepth(root->left) - getDepth(root->right)) <= 1 &&\
            isBalanced1(root->left) && \
            isBalanced1(root->right);
    }


    int getDepth2(TreeNode* root){
        if(!root){
            return 0;
        }

        int left = getDepth2(root->left);
        if(left == -1){
            return -1;
        }
        int right = getDepth2(root->right);
        if(right == -1){
            return -1;
        }

        return (abs(left - right) < 2)?(max(left, right) + 1):(-1);
    }

    bool isBalanced(TreeNode* root){
        return getDepth2(root) != -1;
    }
};
// @lc code=end


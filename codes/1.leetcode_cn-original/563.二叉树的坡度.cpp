/*
 * @lc app=leetcode.cn id=563 lang=cpp
 *
 * [563] 二叉树的坡度
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
    void getSum(TreeNode* root, int& sum){
        if(!root){
            return;
        }

        sum += root->val;
        getSum(root->left, sum);
        getSum(root->right, sum);
    }
    int getTilt(TreeNode* root){
        if(!root){
            return 0;
        }

        int sum1 = 0, sum2 = 0, tilt = 0;
        getSum(root->left, sum1);
        getSum(root->right, sum2);
        tilt += abs(sum1-sum2);
        return tilt;
    }
    void preOrder(TreeNode* root, int& ans){
        if(!root){
            return;
        }

        ans += getTilt(root);
        preOrder(root->left, ans);
        preOrder(root->right, ans);
        return;
    }


    int findTilt(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans = 0;
        preOrder(root, ans);
        return ans;
    }
};
// @lc code=end


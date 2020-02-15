/*
 * @lc app=leetcode.cn id=653 lang=cpp
 *
 * [653] 两数之和 IV - 输入 BST
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
    void ishasVal(TreeNode* root, TreeNode* node, int val, bool& flag){
        if(!root){
            return;
        }

        if(root->val == val && root != node){
            flag = true;
        }
        else if(val < root->val){
            ishasVal(root->left, node, val, flag);
        }
        else{
            ishasVal(root->right, node, val, flag);
        }
    }
    void preOrder(TreeNode* root, TreeNode* node, bool& flag, int k){
        if(!root){
            return;
        }

        //cur
        bool flagCur = false;
        ishasVal(root, node, k-node->val, flagCur);
        if(flagCur){
            flag = true;
        }

        //next
        if(node->left){
            preOrder(root, node->left, flag, k);
        }
        if(node->right){
            preOrder(root, node->right, flag, k);
        }
    }

    bool findTarget(TreeNode* root, int k) {
        bool flag = false;
        preOrder(root, root, flag, k);

        return flag;
    }
};
// @lc code=end


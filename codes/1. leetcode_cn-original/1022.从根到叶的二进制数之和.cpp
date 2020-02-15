/*
 * @lc app=leetcode.cn id=1022 lang=cpp
 *
 * [1022] 从根到叶的二进制数之和
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
    long ans = 0;
    void preOrder(TreeNode* root,string path){
        if(!root->left && !root->right){
            bitset<32> b(path);
            ans += b.to_ulong();
            return;
        }

        if(root->left){
            preOrder(root->left, path + to_string(root->left->val));
        }
        if(root->right){
            preOrder(root->right, path + to_string(root->right->val));
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        if(!root){
            return 0;
        }

        //1
        string path = to_string(root->val);
        preOrder(root, path);

        return ans%(int)(pow(10,9) + 7);
    }
};
// @lc code=end


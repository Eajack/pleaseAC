/*
 * @lc app=leetcode.cn id=897 lang=cpp
 *
 * [897] 递增顺序查找树
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
    void midOrder(TreeNode* root, vector<int>& vals){
        if(!root){
            return;
        }

        if(root->left){
            midOrder(root->left, vals);
        }
        vals.push_back(root->val);
        if(root->right){
            midOrder(root->right, vals);
        }
    }
    TreeNode* buildTree(vector<int> vals){
        if(vals.size() == 0){
            return nullptr;
        }
        
        TreeNode* ans = new TreeNode(vals[0]);
        TreeNode* temp = ans;
        for(int i=1; i<vals.size(); i++){
            TreeNode* t = new TreeNode(vals[i]);
            temp->right = t;
            temp = t;
        }

        return ans;
    }

    TreeNode* increasingBST(TreeNode* root) {
        //1
        if(!root){
            return root;
        }
        vector<int> vals;
        midOrder(root, vals);

        //2
        TreeNode* ans = buildTree(vals);

        return ans;
    }
};
// @lc code=end


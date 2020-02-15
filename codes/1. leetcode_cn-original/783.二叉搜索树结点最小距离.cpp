/*
 * @lc app=leetcode.cn id=783 lang=cpp
 *
 * [783] 二叉搜索树结点最小距离
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
    void preOrder(TreeNode* root, vector<int>& vals){
        if(!root){
            return;
        }

        vals.push_back(root->val);
        if(root->left){
            preOrder(root->left, vals);
        }
        if(root->right){
            preOrder(root->right, vals);
        }
    }
    int minDiffInBST(TreeNode* root) {
        //1
        vector<int> vals;
        preOrder(root, vals);

        //2
        int ans = INT_MAX;
        for(int i=0; i<vals.size(); i++){
            for(int j=i+1; j<vals.size(); j++){
                ans = min(ans, abs(vals[i]-vals[j]));
            }
        }

        return ans;
    }
};
// @lc code=end


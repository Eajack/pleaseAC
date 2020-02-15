/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
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
    void inOrder(TreeNode* root, vector<int>& vals){
        if(!root){
            return;
        }

        vals.push_back(root->val);
        if(root->left){
            inOrder(root->left, vals);
        }
        if(root->right){
            inOrder(root->right, vals);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        if(!root){
            return 0;
        }

        //1
        vector<int> vals;
        inOrder(root, vals);

        //2
        sort(vals.begin(), vals.end());
        int ans = INT_MAX;
        for(int i=0; i<vals.size(); i++){
            for(int j=i+1; j<vals.size(); j++){
                ans = min(abs(vals[i]-vals[j]), ans);
                if(ans == 0){
                    return ans;
                }
            }
        }

        return ans;
    }
};
// @lc code=end


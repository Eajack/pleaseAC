/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    vector<int> findMode(TreeNode* root) {
        //1
        vector<int> vals;
        inOrder(root, vals);

        //2
        map<int, int> cnt;
        for(int v:vals){
            cnt[v]++;
        }

        //3
        int maxFreq = INT_MIN;
        for(auto it=cnt.begin(); it != cnt.end(); it++){
            maxFreq = max(maxFreq, it->second);
        }

        //4
        vector<int> ans;
        for(auto it=cnt.begin(); it != cnt.end(); it++){
            if(it->second == maxFreq){
                ans.push_back(it->first);
            }
        }

        return ans;
    }
};
// @lc code=end


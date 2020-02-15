/*
 * @lc app=leetcode.cn id=637 lang=cpp
 *
 * [637] 二叉树的层平均值
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
    vector<vector<int>> levelOrder(TreeNode* root){
        vector<vector<int>> ans;
        vector<TreeNode*> levelNodes = {root};

        while(levelNodes.size()){
            int size = levelNodes.size();
            vector<int> levelVals;
            for(int i=1; i<=size; i++){
                //pop
                TreeNode* node = levelNodes[0];
                levelNodes.erase(levelNodes.begin());
                levelVals.push_back(node->val);

                //push
                if(node->left){
                    levelNodes.push_back(node->left);
                }
                if(node->right){
                    levelNodes.push_back(node->right);
                }
            }
            ans.push_back(levelVals);
        }

        return ans;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(!root){
            return ans;
        }

        vector<vector<int>> vals = levelOrder(root);
        for(vector<int> l:vals){
            long sum = 0;
            for(int n:l){
                sum += n;
            }
            ans.push_back( ((double)sum)/l.size() );
        }

        return ans;
    }
};
// @lc code=end


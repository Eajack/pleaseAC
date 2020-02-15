/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
    void levelOrder(TreeNode* root, vector<vector<TreeNode*>>& nodes){
        vector<TreeNode*> levelNodes = {root};

        while(levelNodes.size()){
            vector<TreeNode*> currentLevelNodes;

            int size = levelNodes.size();
            TreeNode* currentNode = nullptr;
            while(size--){
                currentNode = levelNodes[0];
                //cout << currentNode->val << endl;
                currentLevelNodes.push_back(currentNode);

                levelNodes.erase(levelNodes.begin());
                if(currentNode->left){
                    levelNodes.push_back(currentNode->left);                   
                }

                if(currentNode->right){
                    levelNodes.push_back(currentNode->right);
                }
            }

            nodes.push_back(currentLevelNodes);
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }

        vector<vector<TreeNode*>> nodes;
        levelOrder(root, nodes);
        reverse(nodes.begin(), nodes.end());

        
        for(vector<TreeNode*> nodes1:nodes){
            vector<int> temp;
            for(TreeNode* node:nodes1){
                if(node){
                    temp.push_back(node->val);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end


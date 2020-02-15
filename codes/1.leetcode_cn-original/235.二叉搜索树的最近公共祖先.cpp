/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
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
    map<int, vector<TreeNode*>> m;

    void dfs(TreeNode* root, TreeNode* parent){
        if(!root){
            return;
        }

        if(m.find(parent->val) != m.end()){
            m[root->val] = m[parent->val];
        }
        m[root->val].push_back(parent);
        m[root->val].push_back(root);

        dfs(root->left, root);
        dfs(root->right, root);
    }

    TreeNode* m1(TreeNode* root, TreeNode* p, TreeNode* q){
        //1
        dfs(root, root);

        //2
        if(m.find(p->val) == m.end() || m.find(q->val) == m.end()){
            return nullptr;
        }
        else{
            vector<TreeNode*> m_p = m[p->val], m_q = m[q->val];
            int i = m_p.size()-1;
            while(i >= 0){
                if( find(m_q.begin(), m_q.end(), m_p[i]) != m_q.end() ){
                    return m_p[i];
                }
                i--;
            }

            return nullptr;
        }        
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int rv = root->val, pv = p->val, qv = q->val;

        if(pv > root->val && qv > root->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        else if(pv < root->val && qv < root->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        else{
            return root;
        }
    }
};
// @lc code=end


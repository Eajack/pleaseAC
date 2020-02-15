/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N叉树的后序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    void helper(Node* root, vector<int>& ans){
        if(!root){
            return;
        }

        for(Node* c:root->children){
            helper(c, ans);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        if(!root){
            return {};
        }

        vector<int> ans;
        helper(root, ans);
        return ans;
    }
};
// @lc code=end

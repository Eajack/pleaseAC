/*
 * @lc app=leetcode.cn id=1290 lang=cpp
 *
 * [1290] 二进制链表转整数
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(!head){
            return 0;
        }

        //1
        string s = "";
        ListNode* n = head;
        while(n){
            s += to_string(n->val);
            n = n->next;
        }

        //2
        cout << s << endl;
        bitset<32> ans(s);
        return ans.to_ullong();
    }
};
// @lc code=end


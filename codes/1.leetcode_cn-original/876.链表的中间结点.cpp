/*
 * @lc app=leetcode.cn id=876 lang=cpp
 *
 * [876] 链表的中间结点
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
    ListNode* middleNode(ListNode* head) {
        if(!head || !head->next){
            return head;
        }

        //1
        ListNode* n = head;
        int len = 0;
        while(n){
            len++;
            n = n->next;
        }

        //2
        int cnt = len/2;
        n = head;
        while(cnt--){
            n = n->next;
        }

        return n;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }

        ListNode *pre = nullptr, *cur = head, *temp = nullptr;
        while(cur){
            temp = cur;
            cur = cur->next;
            temp->next = pre;
            pre = temp;
        }

        return pre;
    }
};
// @lc code=end


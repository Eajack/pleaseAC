/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    bool hasCycle(ListNode *head) {
        if(!head){
            return false;
        }
        else if(!head->next){
            return false;
        }

        ListNode *pre = head, *cur = head->next;
        while(pre!=cur){
            if(!cur || !cur->next){
                return false;
            }
            pre = pre->next;
            cur = cur->next->next;
        }

        return true;
    }
};
// @lc code=end


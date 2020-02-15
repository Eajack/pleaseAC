/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || head->next == nullptr){
            return head;
        }

        ListNode *nodeFirst = head, *nodeSecond = head->next;
        ListNode* temp = nullptr;
        while(nodeSecond){
            int val = nodeFirst->val;
            while(nodeSecond && nodeSecond->val == val){
                temp = nodeSecond;
                nodeSecond = nodeSecond->next;
                nodeFirst->next = nodeSecond;
                delete temp;
            }

            if(nodeSecond){
                nodeFirst = nodeSecond;
                nodeSecond = nodeSecond->next;
            }
        }

        return head;
    }
};
// @lc code=end


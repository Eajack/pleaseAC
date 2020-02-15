/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head){
            return head;
        }
        else if(!head->next){
            if(head->val == val){
                return nullptr;
            }
            else{
                return head;
            }
        }


        //1-去头部
        ListNode *pre = head, *temp = nullptr;
        while(pre && pre->val == val){
            temp = pre;
            pre = pre->next;
            delete temp;
        }

        //2-
        if(pre){
            ListNode *head_new = pre, *cur = pre->next;
            while(cur){
                if(cur && cur->val == val){
                    temp = cur;
                    cur = cur->next;
                    pre->next = cur;
                    delete temp;
                }
                else{
                    pre = cur;
                    cur = cur->next;
                }
            }

            return head_new;
        }
        else{
            return nullptr;
        }
    }
};
// @lc code=end


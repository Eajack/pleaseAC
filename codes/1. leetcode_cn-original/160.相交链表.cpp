/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB){
            return nullptr;
        }
        
        //1-len
        ListNode *node2A = headA, *node2B = headB;
        int lenA = 0, lenB = 0;
        while(node2A){
            node2A = node2A->next;
            lenA++;
        }
        while(node2B){
            node2B = node2B->next;
            lenB++;
        }

        //2-
        node2A = headA;
        node2B = headB;
        int diff = abs(lenA-lenB);
        if(lenA > lenB){
            while(diff--){
                node2A = node2A->next;
            }
        }
        else{
            while(diff--){
                node2B = node2B->next;
            }
        }

        //3-
        while(node2A){
            if(node2A == node2B){
                return node2A;
            }
            node2A = node2A->next;
            node2B = node2B->next;
        }

        return nullptr;
    }
};
// @lc code=end


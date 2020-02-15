/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    int getNVal(ListNode* head, int cnt){
        ListNode *node = head;
        while(cnt--){
            node = node->next;
        }

        return node->val;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next){
            return true;
        }

        //1-
        ListNode *pre = head, *cur = head->next;
        int len = 0, dis = 0;
        while(pre){
            len++;
            pre = pre->next;
        }
        dis = len - 1;

        //2-
        pre = head;
        int val1 = 0, val2 = 0;
        while(dis > 0){
            if( pre->val != getNVal(pre, dis) ){
                return false;
            }
            pre = pre->next;
            dis -= 2;
        }

        return true;
    }
};
// @lc code=end


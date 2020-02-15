/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    ListNode* helper(ListNode* l1, ListNode* l2) {
        ListNode *l1Node = l1, *l2Node = l2;
        int carry = 0, ans = 0;

        while(l1Node){
            if(l2Node){
                ans = l1Node->val + l2Node->val + carry;
                if(ans >= 10){
                    carry = 1;
                    l1Node->val = ans - 10;
                }
                else{
                    carry = 0;
                    l1Node->val = ans;
                }

                l2Node = l2Node->next;
            }
            else{
                if(carry == 1){
                    ans = l1Node->val + carry;
                    if(ans >= 10){
                        carry = 1;
                        l1Node->val = ans - 10;
                    }
                    else{
                        carry = 0;
                        l1Node->val = ans;
                    }
                }
            }
            l1Node = l1Node->next;
        }

        if(carry == 1){
            l1Node = l1;
            while(l1Node->next){
                l1Node = l1Node->next;
            }
            l1Node->next = new ListNode(1);
        }

        return l1;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //1- 
        int l1_len = 0, l2_len = 0;
        ListNode* node = l1;
        while(node){
            l1_len++;
            node = node->next;
        }
        node = l2;
        while(node){
            l2_len++;
            node = node->next;
        }

        //2-
        ListNode* l = new ListNode(0);
        if(l1_len >= l2_len){
            l = helper(l1, l2);
        }
        else{
            l = helper(l2, l1);
        }

        return l;
    }
};
// @lc code=end


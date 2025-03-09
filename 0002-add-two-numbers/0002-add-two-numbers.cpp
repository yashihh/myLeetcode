/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* ans = new ListNode();
        ListNode* ptr = ans;

        while(l1|| l2 || carry != 0){
            int a = 0,b = 0;
            if (l1 != NULL){
                a = l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL){
                b = l2->val;
                l2 = l2->next;
            }
            int temp = a + b + carry;
            ptr->next = new ListNode(temp%10);
            ptr = ptr->next;
            carry = 0;
            if (temp >= 10){
               carry = 1;
            }
        }
        return ans->next;
    }
};
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
        unordered_map<ListNode*,int> check;
        
        while (head != NULL){

            if (check[head]++ > 0 ){
                return true;
            }
            head = head->next;
        }
        return false;
    }
};
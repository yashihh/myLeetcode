/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp = NULL;
    struct ListNode* nextHead = NULL;

    while(head != NULL){
        nextHead = head->next;
        head->next = temp;
        temp = head;
        head = nextHead;
    }
    return temp;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode head; //原本寫指標，指標不會分配記憶體位置，改成實體結構
    struct ListNode* tail = &head;
    head.next = NULL;
    while( list1 && list2 ){
        if(list1->val < list2->val){
            tail->next = list1;
            list1 = list1->next;
        }else{
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if(list1 == NULL){
        tail->next = list2;
    }
    if(list2 == NULL){
        tail->next = list1;
    }
    return head.next;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct  ListNode *newHead = NULL;
    while(head!=NULL){
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = head->val;
        newNode->next = newHead;
        newHead = newNode ;
        head=head->next ;
    }
    return newHead;
}
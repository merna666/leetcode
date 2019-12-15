/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* temp = head;
    struct ListNode* prev =NULL;
    
    while (temp!= NULL ){
        if(temp->val == val){
            if(prev == NULL){
                temp = temp->next;
                head = temp;
            }else{
                prev->next = temp->next;
                temp = temp->next;
            }        
        }else{
            prev = temp;
            temp = temp->next;
        }
    }
return head;
}

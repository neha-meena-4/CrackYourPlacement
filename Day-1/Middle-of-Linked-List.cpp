class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    
    //JUsing two pointers fast and slow
    if(head==NULL||head->next==NULL) return head;
    ListNode* slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    }
};
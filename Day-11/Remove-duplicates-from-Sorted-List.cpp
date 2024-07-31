
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* curr=head;
        ListNode*  dup=head;
        while(curr!=NULL)
        {
            while(curr!=NULL&&curr->val==dup->val)
            {
                curr=curr->next;
            }
            if(curr)
            {dup->next->val=curr->val;
            curr=curr->next;
            dup=dup->next;}
        }
        dup->next=NULL;
        return head;
    }
};
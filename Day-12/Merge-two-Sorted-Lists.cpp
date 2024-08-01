
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(a==NULL )return b;
        if(b==NULL) return a;
        ListNode *head=NULL, *temp=NULL;
        if(a->val <= b->val)
        {
            head=a;
            a=a->next;
        }
        else
        {   head=b;
            b=b->next;
        }
            
        temp=head; 
        while(a !=NULL && b!=NULL)
        {
            if(a->val <= b->val)
            {
                temp->next=a;
                temp=a;
                a=a->next;
            }
            else
            {
                temp->next=b;
                temp=b;
                b=b->next;
            }
        }
        while(a!=NULL){temp->next=a; temp=a;a=a->next;}
        while(b!=NULL){ temp->next=b; temp=b; b=b->next;}
        return head;
    }
};
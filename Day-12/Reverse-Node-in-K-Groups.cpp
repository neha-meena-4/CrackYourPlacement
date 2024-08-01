
class Solution {
public:
 bool countlen(ListNode* head,int k)
    {
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL && c<k-1)
        {
            c++;
            temp=temp->next;
        }
        if(temp==NULL)return false;
        else
        return true;
    }
ListNode* reverseKGroup(ListNode* head, int k) {
    if(head==NULL)return head ;
   if(!countlen(head,k))return head;
    ListNode* curr=head;
    ListNode* prev=NULL;
    ListNode* next=NULL;
    int count=0;
    while(curr!=NULL && count <k){
        next=curr->next;
        curr->next=prev;
        prev =curr;
        curr=next;
        count++;
    }
   
    if(next!=NULL) 
    head->next=reverseKGroup(next,k);
     return prev;

}
};
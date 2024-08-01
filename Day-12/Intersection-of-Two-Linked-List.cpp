
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         if(headA==NULL||headB==NULL) return NULL;
/*

    METHOD-1:-  BY FINDING LENGTH DIFF

        int l1=0,l2=0;
        ListNode *curr1=headA;
        ListNode *curr2=headB;
        while(curr1!=NULL)
        {
            l1++;
            curr1=curr1->next;
            
        }
         while(curr2!=NULL)
        {
             l2++;
            curr2=curr2->next;
            
        }
                    int diff=abs(l1-l2);
        curr1=headA;
        curr2=headB;
        if(l1>l2)
        {

            while(diff--)
            {
                curr1=curr1->next;
            }
        }
       else
        {
            while(diff--)
            {
                curr2=curr2->next;
            }
        }
        
        while(curr1!=curr2 )
        {
          //  if(curr1==NULL) return NULL;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return curr1;
        
      
*/

        ListNode* curr1=headA;
        ListNode*  curr2=headB;
        while(curr1!=curr2)
        {
            curr1=(curr1==NULL)?headB:curr1->next;
            curr2=(curr2==NULL)?headA:curr2->next;
        }
        return curr2;
    }
};



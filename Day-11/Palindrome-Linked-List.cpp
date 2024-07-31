
class Solution {
public:
    bool isPalindrome(ListNode* head) {
//         int l=0;
//         ListNode *curr=head;
//         while(!curr)
//         {
//             l++;
//             curr=curr->next;
//         }
//         stack<ListNode*>s;
       
        
//             int i=0;
//             while(i<l/2)
//             {
//                 s.push(curr);
//                 curr=curr->next;
//                 i++;
//             }
//              if(l%2!=0)curr=curr->next;
//             i=0;
//             while(i<l/2)
//             {
//                 ListNode* front=s.top();
//                 if(front!=curr)return false;
//                 s.pop();
//                 curr=curr->next;
//                 i++;
//             }
        
//         return true;
        
        
        stack<int> start;
        queue<int> end;

        ListNode* curr = head;
        
        while(curr != NULL){ start.push(curr->val); end.push(curr->val); curr = curr->next;}
        
        while(!start.empty() && !end.empty()){
            if(start.top() != end.front()) return false;
            start.pop(); end.pop();
        }
        
        return true;
    }
};
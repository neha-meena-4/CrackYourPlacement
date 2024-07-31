
class Solution {
public:

/*  METHOD-1 :- USING SHIFT OPERATOR
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            ans = (ans << 1) | curr->val; // Shift ans left by 1 bit and add the current value
            curr = curr->next;
        }
        return ans;
    }
*/

    int getDecimalValue(ListNode* head) {
        if(head==0)return 0;
        string str="";
        ListNode* curr=head;
        while(curr!=NULL)
        {
            str+= to_string(curr->val);// Convert integer to string and concatenate
            curr=curr->next;
        }
        int n=str.length();
        int ans=0;
        
        for(int i = 0; i < n; i++) {
            // Convert the character to integer and compute the decimal value
            int bit = str[i] - '0';
            ans += bit * pow(2, n - i - 1);
        }
        return ans;
    }
};
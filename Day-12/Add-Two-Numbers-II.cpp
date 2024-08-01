
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next1 = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next1;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = reverse(l1);
        ListNode* list2 = reverse(l2);

        int carry = 0;
        ListNode* head = new ListNode();
        ListNode* curr = head;

        while (list1 != nullptr || list2 != nullptr || carry) {
            int sum = 0;
            if (list1 != nullptr) {
                sum += list1->val;
                list1 = list1->next;
            }
            if (list2 != nullptr) {
                sum += list2->val;
                list2 = list2->next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode* newnode = new ListNode(sum % 10);
            curr->next = newnode;
            curr = curr->next;
        }

        head = reverse(head->next);  // Reverse the entire list, not head->next
        return head;
    }
};




class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode dummy(0);

        while (head) {
            ListNode* current = head;
            head = head->next;

            ListNode* temp = &dummy;

            while (temp->next && temp->next->val < current->val) {
                temp = temp->next;
            }

            current->next = temp->next;
            temp->next = current;
        }

        return dummy.next;
    }
};
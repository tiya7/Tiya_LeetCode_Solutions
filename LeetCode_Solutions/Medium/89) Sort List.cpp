class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
    }
};
class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy;
        ListNode* temp = &dummy;

        while (a && b) {
            if (a->val < b->val) {
                temp->next = a;
                a = a->next;
            } else {
                temp->next = b;
                b = b->next;
            }
            temp = temp->next;
        }

        if (a)
            temp->next = a;
        else
            temp->next = b;

        return dummy.next;
    }

    ListNode* sortList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next = nullptr;

        ListNode* left = sortList(head);
        ListNode* right = sortList(second);

        return merge(left, right);
    }
};
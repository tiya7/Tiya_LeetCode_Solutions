class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> nums;
        ListNode* temp = head;

        while (temp != nullptr) {
            nums.push_back(temp->val);
            temp = temp->next;
        }

        sort(nums.begin(), nums.end());

        temp = head;
        int i = 0;

        while (temp != nullptr) {
            temp->val = nums[i++];
            temp = temp->next;
        }

        return head;
    }
};
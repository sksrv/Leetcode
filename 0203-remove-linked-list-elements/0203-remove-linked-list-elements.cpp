/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* temp = head;

        while (temp != NULL) {
            if (temp->val == val) {
                ListNode* forward = temp->next;
                temp->next = NULL;
                delete temp;
                prev->next = forward;
                temp = forward;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        head = dummy->next;
        delete dummy;
        return head;
    }
};

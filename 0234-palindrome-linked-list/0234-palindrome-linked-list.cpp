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
    ListNode* middle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* chotaHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;

        return chotaHead;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;

        ListNode* mid = middle(head);
        ListNode* rev = reverse(mid);
        ListNode* temp = head;
        while(rev != NULL){
            if(temp->val != rev->val)  return false;
            temp = temp->next;
            rev = rev->next;
        }
        return true;
    }
};
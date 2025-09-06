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
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp != NULL){
            if(head != NULL && head->val == val){
                ListNode* forward = head->next;
                head->next = NULL;
                delete(head);
                head = forward;
                temp = head;
                prev = NULL;
            }
            else if(temp->val == val){
                ListNode* forward = temp->next;
                temp->next = NULL;
                delete(temp);
                if(prev != nullptr) {   
                    prev->next = forward;
                }
                temp = forward;
            }
            else{
                prev = temp;
                temp = temp->next;
            }           
        }
        return head;
    }
};
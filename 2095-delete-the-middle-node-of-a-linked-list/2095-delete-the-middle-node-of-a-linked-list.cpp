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
    private:
    int middle(ListNode* head){
        ListNode* temp = head;
        
        int length = 0;
        while(temp != NULL){
            length++;
            temp = temp->next;    
        }
        return length/2;
    }
public:
    ListNode* deleteMiddle(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        int mid = middle(head);
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(mid != 0){
            prev = temp;
            temp = temp->next;
            mid--;
        }
        prev->next = temp->next;
        return head;
   }
};
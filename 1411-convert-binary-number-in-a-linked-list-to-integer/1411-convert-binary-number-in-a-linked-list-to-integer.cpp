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
    // calculate Length 
    int getLength(ListNode* head){
        ListNode* temp=head;
        int length=0;
        while(temp != NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }
    int getDecimalValue(ListNode* head) {
        int length = getLength(head)-1; //Getting length 
        ListNode* curr = head;
        int decimal=0;
        while(curr !=NULL){
            decimal += (curr->val) * (pow(2,length));
            curr = curr->next;
            length--;
        }
        return decimal;
    }
};
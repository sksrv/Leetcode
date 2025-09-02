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
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case
        if(head == NULL){
            return NULL;
        }
        //Step0: check atleast k-Nodes are available
        ListNode* temp = head;
        int length = 0;
        while (temp != NULL && length < k) {
            temp = temp->next;
            length++;
        }
        if (length < k) {
            return head;
        }
        //Step1: Reverse first k Nodes
        ListNode* forward = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;

        while(curr != NULL && count < k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        //Step2: Recursion will handle next
        if(forward != NULL){
            head->next = reverseKGroup(forward,k);
        }
        //Step3: Return Head of reversed List
        return prev;
    }
};
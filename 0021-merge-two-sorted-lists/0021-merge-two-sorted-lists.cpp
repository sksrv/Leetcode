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
    ListNode* solve(ListNode* first, ListNode* second){

        if(first->next == NULL){
            first->next = second;
            return first;
        }

        ListNode* curr1 = first;
        ListNode* forward1 = curr1->next;
        ListNode* curr2 = second;
        ListNode* forward2;

        while(forward1 != NULL && curr2 != NULL){
            if((curr2->val >= curr1->val) && (curr2->val <= forward1->val)){
                curr1->next = curr2;
                forward2 = curr2->next;
                curr2->next = forward1;
                // moving pointers
                curr1 = curr2;
                curr2 = forward2;
            }
            else{
                curr1 = forward1;
                forward1 = forward1->next;
                if(forward1 == NULL){
                    curr1->next = curr2;
                    return first;
                }
            }
        }
        return first;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        if(list1->val <= list2->val){
            return solve(list1,list2);
        }
        else{
            return solve(list2,list1);
        }
    }
};
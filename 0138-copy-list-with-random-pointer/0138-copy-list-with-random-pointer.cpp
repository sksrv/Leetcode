/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
    void insertAtTail(Node* &head, Node* &tail, int val){
        Node* temp = new Node(val);

        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        //step1 Create Clone
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;

        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        //step 2 merge lists
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        Node* forward = NULL;

        while(originalNode != NULL && cloneNode != NULL){
            forward = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = forward;

            forward = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = forward;
        }

        //step 3 copying random pointer

        temp = head;

        while(temp != NULL){
            if(temp->next != NULL){
                temp->next->random = temp->random ? temp->random->next : temp->random;
            }
            temp = temp->next->next;
        }

        // step 4 seprate lists

        originalNode = head;
        cloneNode = cloneHead;

        while(originalNode != NULL && cloneNode != NULL){
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;

            if(originalNode != NULL){
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }

    return cloneHead;
    }
};
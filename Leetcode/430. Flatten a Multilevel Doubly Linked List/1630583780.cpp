/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;

        while(curr) {
            if(curr->child) {
                Node* child = curr->child;


                while(child->next) {
                    child = child->next;
                }

                child->next = curr->next;
                if(curr->next) {
                    curr->next->prev = child;
                }

                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = nullptr;
            }

            curr = curr->next;
        }

        return head;
    }
};
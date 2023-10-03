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
    int GetLength(ListNode* head) {
        int len = 0;
        ListNode* temp = head;

        while(temp) {
            temp = temp->next;
            len++;
        }

        return len;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL && n == 1) return NULL;
        int len = GetLength(head);

        ListNode* temp = head;
        
        if(len == n) {
            head = head->next;
            return head;
        }

        int forwardTemp = len - n - 1;
        while(forwardTemp) {
            temp = temp->next;
            forwardTemp--;
        }

        temp->next = temp->next->next;

        return head;
    }
};
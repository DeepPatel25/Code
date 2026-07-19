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
    int getLength(ListNode* head) {
        if (!head) return 0;
        
        ListNode* temp = head;
        int count = 0;

        while (temp) {
            count++;
            temp = temp->next;
        }

        return count;
    }

public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int len = getLength(head);
        k = len - (k % len);

        ListNode* temp = head;

        while (temp->next) temp = temp->next;
        temp->next = head;

        while (k--) temp = temp->next;
        head = temp->next;
        temp->next = NULL;

        return head;
    }
};
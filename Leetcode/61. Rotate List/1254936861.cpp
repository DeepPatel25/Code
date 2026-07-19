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
    int getLength(ListNode* head) {
        if(!head) return 0;

        ListNode* temp = head;
        int count = 0;

        while(temp) {
            temp = temp->next;
            count++;
        }

        return count;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        int n = getLength(head);
        
        if(n == 0 || k == 0) return head;

        k = n - (k % n);
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp = NULL;

        while(k-- > 0) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;
        temp = curr;

        while(temp->next) {
            temp = temp->next;
        }

        temp->next = head;
        return curr;
    }
};
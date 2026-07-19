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
    ListNode* doubleIt(ListNode* head) {
        ListNode* prev = new ListNode(0, head);
        ListNode* prev2 = prev;
        ListNode* temp = head;

        while(temp != NULL) {
            int doubleVal = temp->val * 2;

            if(doubleVal > 9) {
                prev->val += 1;
            }

            temp->val = doubleVal % 10;
            prev = temp;
            temp = temp->next;
        }

        if(prev2->val == 0) {
            return head;
        }

        return prev2;
    }
};
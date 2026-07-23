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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;

        int sum = 0;
        while(temp2) {
            if(temp2->val == 0) {
                temp1->val = sum;
                sum = 0;
                temp1->next = temp2;
                
                if(temp2->next != NULL) temp1 = temp1->next;
            } else {
                sum += temp2->val;
            }

            temp2 = temp2->next;
        }

        temp1->next = NULL;
        return head;
    }
};
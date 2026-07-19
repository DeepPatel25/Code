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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while(head){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
public:
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        first = reverse(first);
        second = reverse(second);

        int carry = 0;
        ListNode* dummyNode = new ListNode();
        ListNode* temp = dummyNode;

        while(first || second || carry) {
            int sum = carry;

            if(first) {
                sum += first->val;
                first = first->next;
            }

            if(second) {
                sum += second->val;
                second = second->next;
            }

            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        ListNode* ans = reverse(dummyNode->next);
        return ans;
    }
};
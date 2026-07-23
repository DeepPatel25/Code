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
    int findGCD(int a, int b) {
        while(a != b) {
            if(a > b) a -= b;
            else b -= a;
        }

        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL) return head;

        ListNode* temp1 = head;
        ListNode* temp2 = head->next;

        while(temp2 != NULL) {
            int gcdVal = findGCD(temp1->val, temp2->val);
            ListNode* tempNode = new ListNode(gcdVal);
            temp1->next = tempNode;
            tempNode->next = temp2;
            temp1 = temp2;
            temp2 = temp2->next;
        }

        return head;
    }
};
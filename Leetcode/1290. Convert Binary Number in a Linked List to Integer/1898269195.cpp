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
    int getDecimalValue(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;

        while (temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int res = 0;
        int powValue = 0;
        for (int i = ans.size() - 1; i >= 0; i--) {
            if (ans[i] == 1) {
                res += pow(2, powValue);
            }

            powValue++;
        }

        return res;
    }
};
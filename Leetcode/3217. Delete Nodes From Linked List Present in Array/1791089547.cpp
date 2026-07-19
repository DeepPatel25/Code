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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<bool> mp(100001, false);
        for (int v : nums) 
            mp[v] = true;

        // Dummy node before head
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr) {
            if (mp[curr->val]) {
                // Skip this node
                prev->next = curr->next;
                curr = curr->next;  // move forward
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy.next;  // new head
    }
};

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        ListNode* prev = head;
        ListNode* curr = head->next;

        if(!curr->next) return {-1, -1};
        ListNode* next = curr->next;

        int i = 2;
        while(prev && curr && next) {
            if((curr->val > prev->val && curr->val > next->val) || 
                (curr->val < prev->val && curr->val < next->val))             {
                    ans.push_back(i);
                }

            prev = curr;
            curr = curr->next;
            if(!curr->next) break;
            next = curr->next;
            i++;
        }

        if(ans.size() <= 1) return {-1, -1};
        int maxDiff = ans[ans.size() - 1] - ans[0];

        int minDiff = INT_MAX;
        for(int i = 0; i < ans.size() - 1; i++) {
            minDiff = min(minDiff, ans[i + 1] - ans[i]);
        }

        return {minDiff, maxDiff};
    }
};
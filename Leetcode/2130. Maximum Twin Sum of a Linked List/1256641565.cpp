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
    int pairSum(ListNode* head) {
        vector<int> arr;
        for(ListNode* temp = head; temp; temp = temp->next) arr.push_back(temp->val);

        int maxSum = 0, n = arr.size();
        for(int i = 0; i < n / 2; i++) maxSum = max(maxSum, arr[i] + arr[n - i - 1]);

        return maxSum;
    }
};
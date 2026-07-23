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
    vector<ListNode*> vi1;

public:
    Solution(ListNode* head) {
        ListNode* temp = head;

        while (temp) {
            vi1.push_back(temp);
            temp = temp->next;
        }
    }
    
    int getRandom() {
        int idx = rand() % vi1.size();
        return vi1[idx]->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
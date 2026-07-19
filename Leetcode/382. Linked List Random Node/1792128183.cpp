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
    vector<ListNode*> vi1, vi2;

public:
    Solution(ListNode* head) {
        ListNode* temp = head;

        while (temp) {
            vi1.push_back(temp);
            temp = temp->next;
        }
    }
    
    int getRandom() {
        if (vi1.size() == 0) {
            swap(vi1, vi2);
        }

        int idx = rand() % vi1.size();
        
        ListNode* temp = vi1[idx];
        vi2.push_back(temp);

        vi1.erase(vi1.begin() + idx);

        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
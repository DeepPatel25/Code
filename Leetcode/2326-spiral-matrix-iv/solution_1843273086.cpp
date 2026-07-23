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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<vector<int>> result(m, vector<int>(n, -1));
        ListNode* curr = head;
        int topRow = 0, leftCol = 0, rightCol = n - 1, bottomRow = m - 1;
        
        while(curr) {
            for (int i = leftCol; i <= rightCol && curr; i++) {
                result[topRow][i] = curr->val;
                curr = curr->next;
            }

            topRow++;
            for (int i = topRow; i <= bottomRow && curr; i++) {
                result[i][rightCol] = curr->val;
                curr = curr->next;
            }

            rightCol--;
            for (int i = rightCol; i >= leftCol && curr; i--) {
                result[bottomRow][i] = curr->val;
                curr = curr->next;
            }

            bottomRow--;
            for (int i = bottomRow; i >= topRow && curr; i--) {
                result[i][leftCol] = curr->val;
                curr = curr->next;
            }

            leftCol++;
        }

        return result;
    }
};
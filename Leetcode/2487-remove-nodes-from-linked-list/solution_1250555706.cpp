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
    ListNode* removeNodes(ListNode* head) {
        vector<int> v;
        ListNode* h = head;
        ListNode* h2 = head;

        while(head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }

        int n = v.size();
        stack<int> s;
        vector<int> r;

        for(int i = n - 1; i >= 0; i--) {
            while(!s.empty() && v[s.top()] <= v[i]) {
                s.pop();
            }

            if(s.empty()) {
                r.push_back(-1);
            } else {
                r.push_back(s.top());
            }

            s.push(i);
        }

        reverse(r.begin(), r.end());
        set<int> st;

        for(int i = 0; i < r.size(); i++) {
            if(r[i] != -1) {
                st.insert(i);
            }
        }

        int i = 0;
        ListNode* prev = NULL;

        while(h) {
            if(st.find(i) != st.end()) {
                if(h == h2) {
                    h = h->next;
                    h2 = h2->next;
                } else {
                    prev->next = h->next;
                    h = h->next;
                }
            } else {
                prev = h;
                h = h->next;
            }

            i++;
        }

        return h2;
    }
};
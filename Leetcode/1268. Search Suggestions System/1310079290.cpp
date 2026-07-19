class TrieNode {
    public:
        unordered_map<char, TrieNode*> children;
        bool isEnd;
        vector<string> searchSuggestion;

        TrieNode() : children(), isEnd(false), searchSuggestion() {}

        bool find(char c) {
            return children.find(c) != children.end();
        }
};

class Solution {
public:
    void insertWord(TrieNode* root, string &word) {
        TrieNode* node = root;

        for(char c: word) {
            if(!node->find(c)) {
                node->children[c] = new TrieNode();
            }

            if(node->children[c]->searchSuggestion.size() < 3)
                node->children[c]->searchSuggestion.push_back(word);
            node = node->children[c];
        }

        node->isEnd = true;
    }

    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());

        TrieNode* root = new TrieNode();

        for(string &word: products)
            insertWord(root, word);

        vector<vector<string>> ans;
        for(char c: searchWord) {
            if(root->find(c)) {
                ans.push_back(root->children[c]->searchSuggestion);
                root = root->children[c];
            } else {
                root->children[c] = new TrieNode();
                ans.push_back({});
                root = root->children[c];
            }
        }

        return ans;

        // TC - O(M * Log(n))

        // sort(products.begin(), products.end());
        // vector<vector<string>> ans;
        // int start = 0, bsStart = 0, n = products.size();
        // string prefix;

        // for(char &c : searchWord) {
        //     prefix += c;

        //     start = lower_bound(products.begin() + bsStart, products.end(), prefix) - products.begin();

        //     ans.push_back({});
        //     for(int i = start; i < min(start + 3, n) && !products[i].compare(0, prefix.length(), prefix); i++)
        //         ans.back().push_back(products[i]);

        //     bsStart = start;
        // }

        // return ans;

        // TC - O(N * M * log(M))
        // SC - O(N)

        // sort(products.begin(), products.end());

        // vector<vector<string>> ans;

        // vector<string> temp;
        // for(int i = 0; i < products.size(); i++) {
        //     if(searchWord[0] == products[i][0]) {
        //         temp.push_back(products[i]);
        //     }
        // }

        // ans.push_back(temp);

        // for(int i = 1; i < searchWord.size(); i++) {
        //     vector<string> temp2;

        //     for(int j = 0; j < temp.size(); j++) {
        //         if(i < temp[j].size() && searchWord[i] == temp[j][i]) {
        //             temp2.push_back(temp[j]);
        //         }
        //     }

        //     ans.push_back(temp2);
        //     temp = temp2;
        // }

        // for(int i = 0; i < ans.size(); i++) {
        //     while(ans[i].size() > 3) {
        //         ans[i].pop_back();
        //     }
        // }

        // return ans;
    }
};
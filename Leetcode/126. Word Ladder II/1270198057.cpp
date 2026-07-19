class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        if (wordSet.find(endWord) == wordSet.end()) return {};

        unordered_map<string, vector<string>> adj;
        unordered_set<string> visited;
        queue<string> q;
        q.push(beginWord);
        visited.insert(beginWord);
        bool found = false;

        while (!q.empty() && !found) {
            int levelSize = q.size();
            unordered_set<string> currentLevelVisited;
            for (int i = 0; i < levelSize; ++i) {
                string currentWord = q.front();
                q.pop();
                string tempWord = currentWord;

                for (int j = 0; j < currentWord.size(); ++j) {
                    char originalChar = currentWord[j];
                    for (char c = 'a'; c <= 'z'; ++c) {
                        if (c == originalChar) continue; // Skip if character is same as original
                        currentWord[j] = c;
                        if (wordSet.find(currentWord) != wordSet.end()) {
                            if (currentWord == endWord) found = true;
                            if (visited.find(currentWord) == visited.end()) {
                                if (currentLevelVisited.find(currentWord) == currentLevelVisited.end()) {
                                    q.push(currentWord);
                                    currentLevelVisited.insert(currentWord);
                                }
                                adj[currentWord].push_back(tempWord);
                            }
                        }
                    }
                    currentWord[j] = originalChar;
                }
            }
            visited.insert(currentLevelVisited.begin(), currentLevelVisited.end());
        }

        vector<vector<string>> res;
        if (found) {
            vector<string> path = {endWord};
            backtrack(endWord, beginWord, adj, path, res);
        }
        return res;
    }
    void backtrack(const string& currentWord, const string& beginWord, unordered_map<string, vector<string>>& adj, vector<string>& path, vector<vector<string>>& res) {
        if (currentWord == beginWord) {
            vector<string> result = path;
            reverse(result.begin(), result.end());
            res.push_back(result);
            return;
        }
        for (const string& nextWord : adj[currentWord]) {
            path.push_back(nextWord);
            backtrack(nextWord, beginWord, adj, path, res);
            path.pop_back();
        }
    }
            
};
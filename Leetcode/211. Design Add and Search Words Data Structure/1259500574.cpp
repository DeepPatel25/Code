class WordDictionary {
public:
    unordered_set<string> st;

    WordDictionary() {
        
    }
    
    void addWord(string word) {
        st.insert(word);
    }
    
    bool search(string word) {
        int count = 0;
        for(int i = 0; i < word.size(); i++) {
            if(word[i] == '.') count++;
        }

        if(count > 0) {
            for(auto it: st) {
                bool flag = true;
                for(int i = 0; i < word.size(); i++) {
                    if((word[i] == '.') || (word[i] == it[i])) {
                        continue;
                    } else {
                        flag = false;
                        break;
                    }
                }

                if(flag) return true;
            }

            return false;
        }

        return (st.find(word) != st.end());
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
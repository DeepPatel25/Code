class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_set<char> s;
        unordered_map<char, char> mp;
        char ch = 'a';

        for(int i = 0; i < key.size(); i++) {
            if(key[i] == ' ') {
                continue;
            } else {
                if(s.find(key[i]) == s.end()) {
                    s.insert(key[i]);
                    mp[key[i]] = ch++;
                }
            }
        }

        for(int i = 0; i < message.size(); i++) {
            if(message[i] == ' ') {
                continue;
            }

            message[i] = mp[message[i]];
        }

        return message;
    }
};
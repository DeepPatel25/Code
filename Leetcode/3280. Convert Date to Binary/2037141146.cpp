class Solution {
private:

public:
    string convertDateToBinary(string date) {
        vector<int> parts;
        stringstream ss(date);
        string token;

        while (getline(ss, token, '-'))
            parts.push_back(stoi(token));
        
        string ans = "";

        for (int i = 0; i < 3; i++) {
            string binary = bitset<32>(parts[i]).to_string();
            binary.erase(0, binary.find_first_not_of('0'));

            if (binary.empty())
                binary = "0";

            ans += binary;

            if (i != 2)
                ans += "-";
        }

        return ans;
    }
};
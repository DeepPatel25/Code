class Solution {
public:
    string defangIPaddr(string address) {
        int i = 0;

        while(i < address.length()) {
            if(address[i] == '.') {
                address = address.substr(0, i) + "[.]" + address.substr(i + 1, -1);
                i += 2;
            } else {
                i++;
            }
        }

        return address;
    }
};
class Solution {
public:
    char kthCharacter(int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        string ans = "a";
        
        while(k > ans.size()) {
            string temp = "";

            for(char ch: ans) {
                temp.push_back(ch);
                temp.push_back(ch + 1);
            }
            
            ans = temp;
            cout << ans << endl;
        }

        return ans[k - 1];
    }
};
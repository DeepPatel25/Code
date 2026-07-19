class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());

        vector<vector<string>> ans;

        vector<string> temp;
        for(int i = 0; i < products.size(); i++) {
            if(searchWord[0] == products[i][0]) {
                temp.push_back(products[i]);
            }
        }

        ans.push_back(temp);

        for(int i = 1; i < searchWord.size(); i++) {
            vector<string> temp2;

            for(int j = 0; j < temp.size(); j++) {
                if(i < temp[j].size() && searchWord[i] == temp[j][i]) {
                    temp2.push_back(temp[j]);
                }
            }

            ans.push_back(temp2);
            temp = temp2;
        }

        for(int i = 0; i < ans.size(); i++) {
            while(ans[i].size() > 3) {
                ans[i].pop_back();
            }
        }

        return ans;
    }
};
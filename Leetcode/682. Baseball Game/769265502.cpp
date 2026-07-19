class Solution {
public:
    int calPoints(vector<string>& ops) {
        int ans = 0;
        vector<int> vi;
        for(int i=0; i<ops.size(); i++){
            string s = ops[i];
            
            if(s=="C"){
                vi.pop_back();
            } else if(s=="D"){
                vi.push_back(vi[vi.size()-1]*2);
            } else if(s=="+"){
                int temp = vi[vi.size()-1] + vi[vi.size()-2];
                vi.push_back(temp);
            } else {
                int temp = stoi(s);
                vi.push_back(temp);
            }
        }
        
        for(auto it: vi){
            ans+=it;
        }
        
        return ans;
    }
};
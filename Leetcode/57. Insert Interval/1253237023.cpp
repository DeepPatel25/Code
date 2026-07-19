class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval) ; 
        sort(intervals.begin() , intervals.end()) ;
        vector<vector<int>>ans ;
        ans.push_back(intervals[0]);
        for(int i = 1 ; i < intervals.size() ; i++)
        {
            int newl = intervals[i][0] ;
            int newr = intervals[i][1] ;

            int l = ans.back()[0] ;
            int r = ans.back()[1] ;
            if(newl < l && newr < l)
            {
                ans.push_back({newl , newr});
            }
            else if(newl < l && newr == l)
            {
                ans.pop_back() ;
                ans.push_back({newl , r});
            }
            else if(newl >= l && newl < r && newr > l && newr <= r)
            {
                continue ;
            }
            else if(newl <= r && newr > r)
            {
                ans.pop_back() ;
                ans.push_back({l , newr}) ;
            }
            else if(newl > r && newr > r)
            {
                ans.push_back({newl , newr}) ;
            }
            else
            {
                continue ;
            }

        }
        return ans ;
    }
};
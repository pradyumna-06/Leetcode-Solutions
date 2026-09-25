class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;
        ans.push_back({intervals[0][0],intervals[0][1]});

        for(int i=1;i<n;i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            if(!ans.empty() && start <= ans.back()[1]){
                ans.back()[1] = max(ans.back()[1],end);
            }

            else{
                ans.push_back({start,end});
            }
        }

        return ans;
    }
};
class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b) {
        if (a[0] == b[0])
            return a[1] > b[1];

        return a[0] < b[0];
    }
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),compare);

        int cnt = 0;
        int maxRight = intervals[0][1];

        for(int i=1;i<n;i++){
            if(intervals[i][1] <= maxRight){
                cnt++;
            }

            else{
                maxRight = intervals[i][1];
            }
        }

        return n - cnt;
    }
};
class Solution {
public:
    int dp[101][101];

    bool solve(string s,int idx,int cnt,int n){
        if(cnt < 0) return false;

        if(idx == n){
            return cnt == 0;
        }

        if(dp[idx][cnt] != -1) return dp[idx][cnt];

        if(s[idx] == '('){
            return solve(s,idx+1,cnt+1,n);
        }

        if(s[idx] == ')'){
            return solve(s,idx+1,cnt-1,n);
        }

        return dp[idx][cnt] = solve(s,idx+1,cnt+1,n) ||
               solve(s,idx+1,cnt-1,n) ||
               solve(s,idx+1,cnt,n);
    }

    bool checkValidString(string s) {
        int n = s.length();
        int idx = 0 , cnt = 0;

        memset(dp,-1,sizeof(dp));

        return solve(s,idx,cnt,n);
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int maxDepth = 0;
        int openCnt = 0;

        for(int i=0;i<n;i++){
            char ch = s[i];

            if(ch == '('){
                openCnt++;
                maxDepth = max(maxDepth,openCnt);
            }

            else{
                if(ch == ')') openCnt--;
            }
        }

        return maxDepth;
    }
};
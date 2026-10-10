class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        int open = 0;
        int close = 0;

        for(int i=0;i<n;i++){
            if(s[i] == '(') open++;

            else{
                close++;
                if(open > 0){
                    open--;
                    close--;
                }
            }
        }

        return open + close;
    }
};
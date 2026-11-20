class Solution {
public:
    string digitSum(string s, int k) {
        string ans;

        while(s.length() > k){
            string temp1 = "";

            for(int i=0;i<s.length();i+=k){
                string temp2 = s.substr(i,k);
                int x = 0;

                for(int j=0;j<temp2.length();j++){
                    x += (temp2[j] - '0');
                }

                temp1 += to_string(x);
            }

            s = temp1;
        }

        return s;
    }
};
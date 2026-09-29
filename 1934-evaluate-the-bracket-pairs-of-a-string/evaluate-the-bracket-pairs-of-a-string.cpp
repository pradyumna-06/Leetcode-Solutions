class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.length();
        string ans = "";

        unordered_map<string,string> mp;

        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        int i=0;
        while(i < n){

            if(s[i] == '('){
                i++;
                string str = "";
                while(i < n && s[i] != ')'){
                    str += s[i];
                    i++;
                }

                if(mp.find(str) != mp.end()){
                    ans += mp[str];
                }

                else{
                    ans += "?";
                }
            }

            else{
                if(s[i] != ')'){
                    ans.push_back(s[i]);
                }
            }

            i++;    
        }

        return ans;
    }
};
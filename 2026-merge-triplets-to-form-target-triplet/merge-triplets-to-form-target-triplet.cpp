class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool xFound = false;
        bool yFound = false;
        bool zFound = false;

        int x = target[0];
        int y = target[1];
        int z = target[2];

        for(auto &t : triplets){
            int a = t[0];
            int b = t[1];
            int c = t[2];

            if(a > x || b > y || c > z) continue;

            if(a == x) xFound = true;
            if(b == y) yFound = true;
            if(c == z) zFound = true;
        }

        return (xFound && yFound && zFound);
    }
};
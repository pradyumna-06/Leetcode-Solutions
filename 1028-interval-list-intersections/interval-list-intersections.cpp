class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n = firstList.size();
        int m = secondList.size();

        int i=0 , j = 0;

        vector<vector<int>> ans;

        while(i < n && j < m){
            int firstNum = max(firstList[i][0],secondList[j][0]);
            int secondNum = min(firstList[i][1],secondList[j][1]);

            if(firstNum <= secondNum) ans.push_back({firstNum,secondNum});

            if(firstList[i][1] < secondList[j][1]) i++;
            else j++;
        }

        return ans;
    }
};
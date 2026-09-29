class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        
        int sum = 0;

        unordered_map<int,int> mp;
        mp[0] = -1;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            mp[sum] = i;
        }

        if(sum < x) return -1;

        int target = sum - x;
        int longestArray = INT_MIN;
        
        sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];

            int numToFind = sum - target;

            if(mp.find(numToFind) != mp.end()){
                longestArray = max(longestArray,i - mp[numToFind]);
            }
        }

        return longestArray == INT_MIN ? -1 : n-longestArray;
    }
};
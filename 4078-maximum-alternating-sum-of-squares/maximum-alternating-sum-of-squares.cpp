class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> pq;

        for(int i=0;i<n;i++){
            pq.push(abs(nums[i]));
        }

        long long ans = 0;
        int mid = 0;

        if(n%2 == 0) mid = n/2;
        else mid = n/2 + 1;

        for(int i=0;i<mid;i++){
            int num = pq.top();
            pq.pop();

            ans += (num * num);
        }

        while(!pq.empty()){
            int num = pq.top();
            pq.pop();

            ans -= (num * num);
        }

        return ans;
    }
};
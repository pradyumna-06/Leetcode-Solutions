class Solution {
public:
    bool checkNum(int num,int i){
        int sum = 0;

        while(num > 0){
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }

        return sum == i;
    }

    int smallestIndex(vector<int>& nums) {
       for(int i=0;i<nums.size();i++){
            if(checkNum(nums[i],i)){
                return i;
            }
       }

       return -1;
    }
};
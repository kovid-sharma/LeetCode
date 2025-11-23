class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = 0;
        int rem1 = 1e9;
        int rem2 = 1e9;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 3 == 0) {
                sum += nums[i];
            } else if (nums[i] % 3 == 1) {
                sum += nums[i];
                rem2 = min(rem2, nums[i] + rem1);
                rem1 = min(rem1, nums[i]);
                
            } else {
                sum += nums[i];
                rem1 = min(rem1, nums[i] + rem2);
                rem2 = min(rem2, nums[i]);
            }
        }
        if (sum % 3 == 0)
            return sum;
        else if (sum % 3 == 1)
            return sum - rem1;
        else
            return sum - rem2;
    }
};
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int st = 0;
        int en = n-1;
        int ans = INT_MIN;
        while(st<en)
        {
            ans = max(nums[st]+nums[en],ans);
            st++;
            en--;
        }
        return ans;
    }
};
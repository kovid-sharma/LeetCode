class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int s =0;
        for(auto it:nums)
        s+=it;

        int f0=0;
        for(int i=0;i<nums.size();i++)
        {
            f0+=i*nums[i];
        }
        int ans = f0;
        int n=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            f0=f0+ s -n*nums[n-i];
            ans = max(ans, f0);
        }
        return ans;
    }
};
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int mod = 1e9+7;
        for(auto &q: queries)
        {
            int l = q[0], r = q[1], k = q[2], v = q[3];
            while(l<=r)
            {
                nums[l] = (1LL*nums[l]*v)%mod;
                l+=k;
            }

        }
        int x = nums[0];
        for(int i=1;i<nums.size();i++)
            x = x ^ nums[i];
        return x;    
    }
};
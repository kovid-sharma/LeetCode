class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>minTillNow;
        int mx = INT_MIN;
        int mi = INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            mi = min(mi,nums[i]);
            minTillNow.push_back(mi);
        }
        for(int i=0;i<n;i++)
        {
            mx = max(mx,nums[i]);
            int stableScore = mx - minTillNow[n-i-1];
            if(stableScore <= k) return i;
        }
        return -1;
    }
};
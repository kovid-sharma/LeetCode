class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int,int>>stableInfo(n);
        int mx = INT_MIN;
        int mi = INT_MAX;
        for(int i=0;i<n;i++)
        {
            mx = max(mx,nums[i]);
            mi = min(mi,nums[n-1-i]);
            stableInfo[i].first = mx;
            stableInfo[n-1-i].second = mi;
        }
        for(int i=0;i<n;i++)
        {
            int stableScore = stableInfo[i].first - stableInfo[i].second;
            if(stableScore <= k) return i;
        }
        return -1;
    }
};
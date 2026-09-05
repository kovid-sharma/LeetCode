class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>minTillNow;
        vector<int>maxTillNow;
        int mx = INT_MIN;
        int mi = INT_MAX;
        for(int i=0;i<n;i++)
        {
            mx = max(mx,nums[i]);
            maxTillNow.push_back(mx);
        }

        for(int i=n-1;i>=0;i--)
        {
            mi = min(mi,nums[i]);
            minTillNow.push_back(mi);
        }


        for(int i=0;i<n;i++)
        {
            int stableScore = maxTillNow[i] - minTillNow[n-i-1];
            if(stableScore <= k) return i;
        }
        return -1;
    }
};
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // max 0 to i
        // min i to n-1
        // in O(1)
        // we can use max till now , min till now

        vector<int>minTillNow;
        vector<int>maxTillNow;
        int mx = INT_MIN;
        int mi = INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            mx = max(mx,nums[i]);
            maxTillNow.push_back(mx);
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            mi = min(mi,nums[i]);
            minTillNow.push_back(mi);
        }


        for(int i=0;i<nums.size();i++)
        {
            int stableScore = maxTillNow[i] - minTillNow[nums.size()-i-1];
            if(stableScore <= k) return i;
        }
        return -1;
    }
};
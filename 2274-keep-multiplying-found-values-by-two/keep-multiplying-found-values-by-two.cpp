class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int,int>mp;
        for(auto it:nums)mp[it]++;
        while(mp.find(original)!=mp.end())
            original*=2;
        return original;
    }
};
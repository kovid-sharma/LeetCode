class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       map<int,vector<int>>mp;
       for(int i=0;i<nums.size();i++)
       {
            mp[nums[i]].push_back(i);
       } 
       int ans = INT_MAX;
       for(auto it:mp)
       {
         vector<int> tuple = it.second;
         if(tuple.size()>=3)
         {
            for(int i=0;i<tuple.size()-2;i++)
            {
                int j = i+1;
                int k = i+2;
                int val = abs(tuple[i]-tuple[j]) + abs(tuple[j]-tuple[k]) + abs(tuple[k]-tuple[i]);
                ans = min(val,ans);
            }
            
         }
       }
       return ans==INT_MAX? -1: ans;
    }
};
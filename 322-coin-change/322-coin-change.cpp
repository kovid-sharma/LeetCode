class Solution {
public:
   
    int dp[10005];
    int func(vector<int>&coins,int amount)
    {   
        if(amount==0)return 0;
        if(dp[amount]!=-1)return dp[amount];
         int ans=INT_MAX;
        for(auto&it:coins)
        {
            if(amount-it>=0)
            ans=min(ans+0LL,func(coins,amount-it)+1LL);
        }
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans=func(coins,amount);
        return ans==INT_MAX?-1:ans;
    }
};
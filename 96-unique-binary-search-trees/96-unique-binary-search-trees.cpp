class Solution {
public:
    int dp[20]={};
    int numTrees(int n) {
        if(n<=1)return 1;
        if(dp[n])return dp[n];
        for(int i=1;i<=n;i++)
            dp[n]+=numTrees(n-i)*numTrees(i-1);
        return dp[n];
    }
};
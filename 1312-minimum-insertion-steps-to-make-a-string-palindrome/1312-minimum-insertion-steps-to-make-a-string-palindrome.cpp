class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        int dp[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                dp[i][j]=0;
        for(int i=n-1;i>=0;i--)
        {
            dp[i][i]=1;
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    dp[i][j]=dp[i+1][j-1]+2;
                }
                else
                {
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1];
    }
    int minInsertions(string s) {
        return s.size()-longestPalindromeSubseq(s);
    }
     
};
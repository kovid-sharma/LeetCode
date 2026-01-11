class Solution {
public:
    int count(string &s, int idx)
    {
        int sum = 0;
        for(int i=idx;i<s.size();i++)
        {
            sum+=s[i];
        }
        return sum;
    }
    int solve(int i,int j,string &s1,string &s2,vector<vector<int>>&dp)
    {
        if(i>=s1.size()) return count(s2,j);
        if(j>=s2.size()) return count(s1,i);
        if(dp[i][j]!=-1)
            return dp[i][j];
        int minAscii = INT_MAX;

        if(s1[i]==s2[j])
        {
            //choose to exculde the current character from deletion

            //if choose
            minAscii = min(minAscii, solve(i+1,j+1,s1,s2,dp));
            //if not choose
            minAscii = min(minAscii, s1[i]+s2[j]+solve(i+1,j+1,s1,s2,dp));
        }
        else
        {
            //delete the fucking characters
            minAscii = min(s1[i]+solve(i+1,j,s1,s2,dp) , s2[j]+solve(i,j+1,s1,s2,dp));
        }
        return dp[i][j]=minAscii;
    }
    int minimumDeleteSum(string s1, string s2) {
        vector<vector<int>>dp;
        int n=s1.size();
        int m = s2.size();
        dp.resize(n, vector<int>(m, -1));

        int ans = solve(0,0,s1,s2,dp);
        return ans;
    }
};
class Solution {
public:
    long long solve(int i, int j, vector<int>& ro, vector<vector<int>>& fa,
                    vector<vector<long long>>& dp, int n, int m) {
        if (i == n)
            return 0;
        if (j == m)
            return 1e15;

        if (dp[i][j] != -1)
            return dp[i][j];
        long long res = solve(i, j + 1, ro, fa, dp, n, m);
        long long cost = 0;
        int pos = fa[j][0];
        int lim = fa[j][1];

        for (int k = 0; k < lim && k + i < n; k++) {
            cost += abs(ro[i + k] - pos);
            res = min(res, cost + solve(i + k + 1, j + 1, ro, fa, dp, n, m));
        }
        return dp[i][j] = res;
    }

    long long minimumTotalDistance(vector<int>& robot,
                                   vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());
        int n = robot.size();
        int m = factory.size();
        vector<vector<long long>> dp(n, vector<long long>(m, -1));
        return solve(0, 0, robot, factory, dp, n, m);
    }
};
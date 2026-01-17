class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences,
                           vector<int>& vFences) {
        // problem boild down to max of common gap

        unordered_set<int> st;
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);
        int ans = INT_MIN;
        for (int i = 0; i < hFences.size(); i++) {
            for (int j = 0; j < hFences.size(); j++) {
                st.insert(abs(hFences[i] - hFences[j]));
            }
        }

        for (int i = 0; i < vFences.size(); i++) {
            for (int j = i+1; j < vFences.size(); j++) {
                int val = abs(vFences[i] - vFences[j]);
                if(st.find(val)!=st.end())
                    ans = max(ans, val);
            }
        }
        if(ans == 0) return -1;
        long long mod = 1e9+7;
        return ans==(INT_MIN) ? -1:(1LL*ans*ans)%mod;
    }
};
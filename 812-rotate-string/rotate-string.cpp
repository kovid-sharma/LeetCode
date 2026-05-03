class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n = s.size();
        if(n!=goal.size()) return false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int idx = i+j;
                idx%=n;
                if(s[j] != goal[idx]) break;
                if(j==n-1) return true;
            }
        }
        return false;
    }
};
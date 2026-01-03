class Solution {
public:
    int mod = 1e9+7;
    int numOfWays(int n) {
        long col3 = 6;
        long col2 = 6;
        for(int i=2;i<=n;i++)
        {
            long nextCol3 = col3;
            long nextCol2 = col2;
            nextCol3 = (2*col3)%mod + (2*col2)%mod;
            nextCol2 = (2*col3)%mod + (3*col2)%mod;
            col3 = nextCol3;
            col2 = nextCol2;
        }
        return ((col3%mod) + (col2%mod))%mod;
    }
};
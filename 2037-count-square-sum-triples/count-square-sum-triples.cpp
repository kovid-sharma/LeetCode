class Solution {
public:
    int countTriples(int n) {
        int cnt =0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                int sum = i*i + j*j;
                int x = sqrt(sum);
                if(x>n)break;
                if(x*x == sum && x<=n)cnt++;
            }
        }
        return cnt;
    }
};
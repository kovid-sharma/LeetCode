class Solution {
public:
    int numSub(string s) {
        int ans = 0;
        int mod = 1e9 + 7;
        int i =0;
        while(i<s.size())
        {
            int cnt =0;
            if(s[i]=='1'){
                while(i<s.size() && s[i]=='1'){
                    cnt++;
                    i++;
                }
                long long tmp = 1LL*(cnt)*(cnt+1);
                tmp/=2;
                tmp%=mod;
                ans += (int)tmp;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
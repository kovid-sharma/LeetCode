class Solution {
public:
    int numberOfWays(string corridor) {
        int mod = 1e9+7;
        vector<int>pos;
        int i = 0;
        for(auto c:corridor)
        {
            if(c=='S')
                pos.push_back(i);
            i++; 
        }
        if(pos.size()==0) return 0;
        if(pos.size()%2!=0) return 0;
        //first 2 are one section
        int secEnd = pos[1];
        long ans = 1;
        for(int j=2;j<pos.size()-1;j+=2) //keep on moving to secStart
        {
            //section diff
            int diff = pos[j] - secEnd;
            ans = (ans * diff)%mod;
            ans = ans%mod;
            secEnd = pos[j+1];
        }
        return (int)ans;
    }
};
class Solution {
public:
    long long sumAndMultiply(int n) {
        string nn = to_string(n);
        long long s=0;
        long long na= 0;
        for(auto ch:nn){
            if(ch!='0'){
                na= na*10+ (ch-'0');
                s+=(ch-'0');
            }
        }
        return s*na;
    }
};
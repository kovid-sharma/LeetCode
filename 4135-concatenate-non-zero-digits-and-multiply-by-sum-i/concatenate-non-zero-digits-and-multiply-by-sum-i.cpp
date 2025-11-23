class Solution {
public:
    long long sumAndMultiply(int n) {
        long long pr = 1LL;
        int new_n = 0;
        int sum =0;
        while(n)
        {
            if(n%10 == 0){

            }
            else{
                new_n*=10;
                new_n+=n%10;
                sum+=n%10;
            }
            n/=10;
        }
        int y =0;
        while(new_n)
        {
            y = y*10+ new_n%10;
            new_n/=10;
        }
        return pr*sum*y;
    }
};
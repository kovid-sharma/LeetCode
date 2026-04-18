class Solution {
public:
    int mirrorDistance(int n) {
        //everyone can reverse by string concat

        int cp = n;
        while(cp%10==0)
            cp/=10;

        int revNum = 0;
        while(cp)
        {
            revNum*=10;
            revNum+=cp%10;
            cp/=10;
        }
        cout<<revNum;
        return abs(revNum-n);   
    }
};
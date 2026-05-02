class Solution {
public:
    int isGood(int num)
    {
        bool isRot = false;
        while(num)
        {
            int rem = num%10;
            if(rem == 3 or rem ==4 or rem ==7) return false;
            if(rem==2 or rem==5 or rem ==6 or rem ==9)isRot = true;
            num/=10;
        }
        return isRot;
    }
    int rotatedDigits(int n) {
        // count of number which are good
        //which numbers are good really
        // number will change only when they have 2,5 or 6,9 
        //number will not be good if they have 3,4,7

        int ans = 0;
        int cnt = 0;
        for(int i=1;i<=n;i++)
        {
            if(isGood(i))
            cnt++;
        }
        return cnt;
    }
};
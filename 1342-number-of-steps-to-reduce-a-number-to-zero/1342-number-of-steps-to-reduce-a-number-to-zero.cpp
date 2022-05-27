class Solution {
public:
    int numberOfSteps(int num) {
        int cnt=0;
        while(num)
        {
            if(num%2)
            {
                cnt++;
                num--;
            }
            else
            {
                num/=2;
                cnt++;
            }
        }
        return cnt;
    }
};
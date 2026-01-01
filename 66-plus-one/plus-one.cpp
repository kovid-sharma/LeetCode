class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if (digits[n - 1] != 9) {
            digits[n - 1]++;
            return digits;
        }
        while(n>0 && digits[n-1]==9)
        {
            digits[n-1]=0;
            n--;
        }
        if(n==0)
        {
            vector<int> cpDig;
            cpDig.push_back(1);
            for(auto it:digits)cpDig.push_back(it);
            return cpDig;
        }
        else digits[n-1]++;
        return digits;
    }
};
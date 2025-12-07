class Solution {
public:
    int countOdds(int low, int high) {
        if(high%2==1 or low%2==1)
            return (high-low)/2 + 1;
        return (high - low)/2;
    }
};
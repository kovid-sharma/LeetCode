class Solution {
public:
    long long countCommas(long long n) {
        if (n < 1000) return 0;

        long long total = 0;
        long long lower = 999;   // 10^3 - 1
        int commas = 1;

        while (lower < n) {
            long long upper = lower * 1000 + 999;   // 10^(3k+3) - 1
            long long high = min(n, upper);
            total += (long long)commas * (high - lower);
            lower = upper;
            commas++;
        }
        return total;
    }
};
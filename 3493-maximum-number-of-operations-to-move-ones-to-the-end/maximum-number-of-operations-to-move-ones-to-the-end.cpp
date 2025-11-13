class Solution {
public:
    int maxOperations(string s) {

        // starting left we need to find count of 1 in between . curr and next
        // one
        int currCnt = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                currCnt++;
            } else {
                if (i > 0 && s[i - 1] == '1') {
                    ans += currCnt;
                }
            }
        }
        return ans;
    }
};
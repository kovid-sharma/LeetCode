class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cn=0;
        for(auto it:nums)if(it%3!=0)cn++;
        return cn;
    }
};
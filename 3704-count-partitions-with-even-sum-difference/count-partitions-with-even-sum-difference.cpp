class Solution {
public:
    int countPartitions(vector<int>& nums) {

        // diff of both even is even
        // diff of both odd is even
        int sum =0;
        for(auto it:nums)sum+=it;
        if(sum%2==0)return nums.size()-1;
        return 0;
    }
};
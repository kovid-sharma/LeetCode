class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int x = nums[0];
        sort(nums.begin()+1,nums.end());
        return x+ nums[1]+nums[2];
    }
};
class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int idx = -1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1])
                idx = i;
        }

        return idx+1;
    }
};
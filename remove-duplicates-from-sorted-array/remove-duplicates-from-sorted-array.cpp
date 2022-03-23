class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[ptr])
            {
                nums[ptr+1]=nums[i];
                ptr++;
            }
        }
        return ++ptr;
    }
};
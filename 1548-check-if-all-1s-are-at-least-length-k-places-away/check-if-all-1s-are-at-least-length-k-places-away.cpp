class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int lastIdx = -1;
        for(int i=0;i<nums.size();i++)
        {
            if(lastIdx != -1){
                if(nums[i]==1 && (i-lastIdx-1)<k)return false;
            }
            if(nums[i]==1)lastIdx = i;
        }
        return true;
    }
};
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        
        int i = 0;
        while(i<nums.size()-1 && nums[i]<nums[i+1])
        {
            i++;
        }
        if(i==0 || i==nums.size()-1)return false;


        int p = i;
        while(i<nums.size()-1 && nums[i]>nums[i+1])i++;
        if(i==p || i==nums.size()-1) return false;


        while(i<nums.size()-1 && nums[i]<nums[i+1])i++;

        if(i==nums.size()-1) return true;
        return false;
    }
};
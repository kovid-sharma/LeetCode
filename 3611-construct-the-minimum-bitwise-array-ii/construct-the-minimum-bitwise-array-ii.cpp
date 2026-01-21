class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 2) {
                ans.push_back(-1);
                continue;
            }
            int bit = 0;
            while (nums[i] & (1 << bit))
                bit++;
            bit--;

            ans.push_back(nums[i] ^ (1<<bit));
        }
        return ans;
    }
};
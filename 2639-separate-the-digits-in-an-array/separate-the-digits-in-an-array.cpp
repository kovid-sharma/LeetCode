class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(auto it:nums)
        {
            vector<int>tmp;
            while(it)
            {
                tmp.push_back(it%10);
                it/=10;
            }
            reverse(tmp.begin(),tmp.end());
            for(auto it:tmp)
                ans.push_back(it);
        }
        return ans;
    }
};
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        //Two Options
        int minNum = INT_MAX;
        for(auto it:nums1) minNum = min(minNum,it);
        // can you change min numbers parity?
        //All Even
        if(minNum%2==0)
        {
            for(auto it:nums1) if(it%2==1) return false;
        }
        //All Odd
        else
        {
            return true;
        }
        return true;
    }
};
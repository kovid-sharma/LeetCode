class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return false;
        stack<int>st;
        int twO=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(twO>nums[i])
                return true;
            while(!st.empty() and st.top()<nums[i]){
                twO=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
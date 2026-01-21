class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>st;
        int ans = INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            if(st.empty())st.push(prices[i]);

            if(st.top()>prices[i])
            {
                st.pop();
                st.push(prices[i]);
            }
            else
            {
                ans = max(ans,prices[i] - st.top());
            }
        }
        return ans;
    }
};
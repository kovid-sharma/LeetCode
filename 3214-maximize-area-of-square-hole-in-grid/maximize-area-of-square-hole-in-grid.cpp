class Solution {
public:
    int maxCont(vector<int> &bars)
    {
        
        int ans = 1;
        int cont = 1;
        for(int i=1;i<bars.size();i++)
        {

            if(bars[i] - bars[i-1] ==1)
            {
                cont++;
            }
            else
            {
               
                cont = 1;
            }
             ans = max(cont,ans);
    
        }
        return ans+1;

    }
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        //real observation is that it does not matter about horizonatal and vertica;, we just need to find continuous bars and the min max continuous


        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());

        int ans = min(maxCont(hBars),maxCont(vBars));
        return ans * ans;
    }
};
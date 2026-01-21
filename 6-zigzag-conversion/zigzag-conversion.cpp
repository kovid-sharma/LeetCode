class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1)return s;
        vector<string>grid(numRows,"");
        int up = -1;
        int j = 0;
        for(int i=0;i<s.size();i++)
        {
            if(j==numRows-1) up = 1;
            if(j==0) up = -1;

            grid[j]+=(s[i]);
            if(up==1) j--;
            else j++;

        }
        string ans;
        for(auto c:grid) ans+=c;
        return ans;
    }
};
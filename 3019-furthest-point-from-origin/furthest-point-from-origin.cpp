class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        //either choose all l or all r
        int l = 0;
        int r = 0;
        for(auto ch:moves)
        {
            if(ch=='L'){
                l++;
                r--;
            }
            else if(ch=='R')
            {
                r++;
                l--;
            }
            else
            {
                l++;
                r++;
            }
                

        }
        return max(l,r);
    }
};
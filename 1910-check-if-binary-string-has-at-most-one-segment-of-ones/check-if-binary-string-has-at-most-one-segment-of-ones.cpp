class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        bool seenF = false;
        bool seenS = false;
        for(int i=0;i<n;i++)
        {
            if(seenF == false && s[i]=='1')
            {
                seenF = true;
                while(i<n && s[i]=='1')
                {
                    i++;
                }
            }
            if(seenF == true && s[i]=='1')
            {
                seenS = true;
            }
        }
        if(seenS == true)return false;
        else return true;
    }
};
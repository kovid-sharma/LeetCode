class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        bool curr = n%2;
        while(n)
        {
            if(n%2==curr)
            {

            }
            else
            {
                return false;
            }
            curr = !curr;
            n/=2;
        }

        return true;
    }
};
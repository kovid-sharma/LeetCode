class Solution {
public:
    int reverse(int num)
    {
        while(num%10 == 0)
                num/=10;
        string numS;
        while(num)
        {
            numS.push_back(num%10 + '0');
            num/=10;
        } 
        int rev= stoi(numS);      
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        //at the current index we check that the current number if part of the map
        //if yes we calc min mirror value
        //then at current index we add the mirror of the nums[i] to a map
        //
        int minMirrorVal = INT_MAX;
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            int num = nums[i];
            // while(num%10 == 0)
            //     num/=10;

            if(mp.find(num)!=mp.end())
            {
                minMirrorVal = min(minMirrorVal,abs(i-mp[num]));
            }
            int rev = reverse(nums[i]);
            mp[rev] = i;
        }
        return minMirrorVal==INT_MAX?-1:minMirrorVal;

    }
};
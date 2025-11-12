class Solution {
public:
    int count(int num,vector<int>&nums){
        int cnt = 0;
        for(auto it:nums)
        {
            if(num==it)
                cnt++;
        }
        return cnt;
    }
    int euclid_gcd(int a,int b)
    {
        if(a==0)return b;
        if(b==0)return a;
        //B keeps on decreasing until 0
        //Get GCD in A
        while(b!=0)
        {
            int r = a%b;
            a=b; //New iteration will be for b and r. Acording to euclid GCD of b and r is same as a and b
            b=r;
        }
        return a;
    }
    int minOperations(vector<int>& nums) {
        
        int cnt = count(1,nums);
        int n= nums.size();
        int ans = INT_MAX;
        if(cnt>=1){
            return n-cnt;
        }
        else{
            for(int i=0;i<n-1;i++)
            {
                int curr = nums[i];
                for(int j=i+1;j<n;j++)
                {
                    curr = euclid_gcd(curr, nums[j]);
                    if(curr == 1){
                        ans = min(ans, (j-i)+n-1);
                    }
                }
            }
        }

        return ans==INT_MAX?-1:ans;
    }
};
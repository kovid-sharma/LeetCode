class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=nums.size()-1;
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            if(abs(nums[r])>abs(nums[l])){
                ans[i]=(nums[r]*nums[r]);
                r--;
            }
            else{
                ans[i]=(nums[l]*nums[l]);
                l++;
            }
        }
        return ans;
    }
};
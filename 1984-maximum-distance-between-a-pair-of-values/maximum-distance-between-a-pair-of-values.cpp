class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = INT_MIN;
        int i =0;
        int j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(i==nums1.size())break;
            while(i>j)
                j++;
            if(j<nums2.size() && i<=j && nums1[i]<=nums2[j])
            {
                ans = max(ans, j-i);
                                j++;
            }else
            {
                i++;
            }
        }
        return ans == INT_MIN? 0:ans;
    }
};
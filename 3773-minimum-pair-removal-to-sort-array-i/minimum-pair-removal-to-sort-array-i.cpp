class Solution {
public:
    bool isRemaining(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1])
                return true;
        }
        return false;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int cnt = 0;

        while (isRemaining(nums)) {
            int pos = 0;
            int minPair = INT_MAX;

            // find minimum sum adjacent pair
            for (int i = 0; i < nums.size() - 1; i++) {
                int sum = nums[i] + nums[i + 1];
                if (sum < minPair) {
                    minPair = sum;
                    pos = i;
                }
            }

            // merge the pair
            nums[pos] = nums[pos] + nums[pos + 1];

            // shift elements left (manual erase)
            for (int i = pos + 1; i < nums.size() - 1; i++) {
                nums[i] = nums[i + 1];
            }

            // reduce size
            nums.pop_back();

            cnt++;
        }

        return cnt;
    }
};

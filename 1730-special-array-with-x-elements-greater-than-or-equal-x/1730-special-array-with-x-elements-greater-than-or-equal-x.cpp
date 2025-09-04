class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());  // Sort the array

        for (int x = 1; x <= n; x++) {
            // Find first index where nums[idx] >= x
            auto it = lower_bound(nums.begin(), nums.end(), x);
            int count = nums.end() - it;  // number of elements >= x

            // Check condition
            if (count == x) {
                return x;
            }
        }
        return -1;  // No valid x found
    }
};

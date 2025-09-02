class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[mid + 1]) {
                // Peak is on the right side
                low = mid + 1;
            } else {
                // Peak is on the left side (or at mid)
                high = mid;
            }
        }

        return low; // or high, since low == high
    }
};

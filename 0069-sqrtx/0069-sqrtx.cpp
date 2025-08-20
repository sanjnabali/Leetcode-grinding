class Solution {
public:
    int mySqrt(int x) {
        // Edge case for 0 or 1
        if (x == 0 || x == 1) return x;
        
        long long left = 0, right = x;
        long long ans = 0;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            
            if (mid * mid == x) {
                return mid; // Perfect square
            }
            
            if (mid * mid < x) {
                ans = mid;        // possible answer
                left = mid + 1;   // go right side
            } else {
                right = mid - 1;  // go left side
            }
        }
        
        return ans;
    }
};

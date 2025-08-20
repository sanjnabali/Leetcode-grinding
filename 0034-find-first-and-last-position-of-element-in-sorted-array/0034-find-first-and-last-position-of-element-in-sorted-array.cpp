class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {binary(nums, target, true), binary(nums, target, false)};
    }


    int binary(vector<int>& nums, int target, bool findFirst){
        int low = 0; 
        int high = nums.size()-1;
        
        int result = -1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(target > nums[mid]){
                low = mid + 1;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            }
            else{
                result = mid;  
                if(findFirst)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
           
        }
        return result;
    }
    
    
};
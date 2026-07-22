class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int minimum = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums.size()==1){
                return nums[0];
            }
            if(nums[mid]==nums[low] && nums[mid]==nums[high]){
                low = low+1;
                high = high-1;
                minimum = min(minimum, nums[mid]);
                continue;
            }
            if(nums[low]<=nums[mid]){
                minimum = min(minimum, nums[low]);
                low = mid+1;
            }
            else{
                high = mid-1;
                minimum = min(minimum, nums[mid]);
            }
        }
        return minimum;
    }
};
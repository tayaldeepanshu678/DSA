class Solution {
public:
    int first(vector<int>&nums, int target){
        int first1 = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                first1 = mid;
                high = mid-1;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return first1;
    }
    int last(vector<int>&nums, int target){
        int last1 = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                last1 = mid;
                low = mid+1;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return last1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums, target), last(nums, target)};
    }
};
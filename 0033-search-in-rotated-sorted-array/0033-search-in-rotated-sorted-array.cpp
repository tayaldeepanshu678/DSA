class Solution {
public:
    int binarysearch(vector<int>&nums,int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>=nums[low]){
                if(nums[low]<=target && nums[mid]>=target){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(nums[mid]<=target && nums[high]>=target){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
    }
    return -1;
    }
    int search(vector<int>& nums, int target) {
        return binarysearch(nums,target);
    }
};
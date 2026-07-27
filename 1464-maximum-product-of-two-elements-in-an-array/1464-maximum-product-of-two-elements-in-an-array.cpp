class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x = INT_MIN;
        int seclarge = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>x){
                seclarge = x;
                x = nums[i];
            }
            else if(seclarge<nums[i]){
                seclarge = nums[i];
            }
        }
        return (seclarge-1)*(x-1);
    }
};
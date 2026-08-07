class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int j = nums.size()-1;
        // int ans = 0;
        // int k;
        // for(int i = 0; i<nums.size(); i++){
        //     if(nums[i]==val && nums[j]!=val){
        //         swap(nums[i],nums[j]);
        //         j--;
        //     }
        //     else{
        //         j--;
        //     }
        // }
        // for(k = 0; k<nums.size(); k++){
        //     if(nums[k]==val){
        //         ans = k;
        //         break;
        //     }
        // }
        // return k-1;
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=val){
                ans.push_back(nums[i]);
            }
        }
        nums = ans;
       return nums.size();
    }
};
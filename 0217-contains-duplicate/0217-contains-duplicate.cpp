class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i : nums){
            mpp[i]++;
        }
        for(auto it : mpp){
            if(it.second >= 2){
                return true;
            }
        }
        return false;

        // sort(nums.begin(),nums.end());
        // for(int i = 1; i<nums.size(); i++){
        //     if(nums[i]==nums[i-1]){
        //         return true;
        //     }
        // }
        // return false;
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size()-1;
        int i = 0;
        while(i<=j){
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
            }
            else{
                i++;
            }
        }

        return j+1;
    //     vector<int>ans;
    //     for(int i = 0; i<nums.size(); i++){
    //         if(nums[i]!=val){
    //             ans.push_back(nums[i]);
    //         }
    //     }
    //     nums = ans;
    //    return nums.size();
    }
};
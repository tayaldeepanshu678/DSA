class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>l1;
        vector<int>l2;
        vector<int>l3;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<pivot){
                l1.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                l2.push_back(nums[i]);
            }
            else{
                l3.push_back(nums[i]);
            }
        }
        for(int i = 0; i<nums.size(); i++){
            if(i<l1.size()){ 
                nums[i] = l1[i];
            }
            else if(i >= l1.size() && i < l1.size() + l2.size()){ 
                nums[i] = l2[i-l1.size()];
            }
            else{
                nums[i] = l3[i-(l1.size()+l2.size())];
            }
        }
        return nums;
    }
};
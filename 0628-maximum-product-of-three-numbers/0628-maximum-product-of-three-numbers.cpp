class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int product=1;
        sort(nums.begin(),nums.end());
        if(nums[0]>=0){ 
            return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        }
        if(nums.size()==3){
            return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        }
        int cnt = 0;
        for(int i = 0; i<nums.size()-1; i++){
            // for(int j = i+1; j<nums.size(); j++){
            if(nums[i]<0){ 
                // if(nums[i]<nums[i+1]){ 
                    product *= nums[i];
                    cnt++;
                // }
            }
            if(cnt==2){
                break;
            }
            //     else{
            //         product *= nums[i];
            //     }
            // }
        }
        int exm2 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];

        int exm1 = INT_MIN;
        if(cnt==2){ 
           exm1 = product*nums[nums.size()-1];
        }
        return max(exm1,exm2);
    }
};
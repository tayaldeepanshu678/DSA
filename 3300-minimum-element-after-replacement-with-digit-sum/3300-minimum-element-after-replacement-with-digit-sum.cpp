class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
            int sum = 0;
            int ch = nums[i];
            while(ch>0){
                int temp = ch%10;
                sum+=temp;
                ch/=10;
            }
            mini = min(mini,sum);
        }
        return mini;
    }
};
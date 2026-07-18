class Solution {
public:
    int findGCD(vector<int>& nums) {
        int x = nums[0];
        int y = nums[0];
        for(int i = 0; i<nums.size(); i++){
            x = min(x,nums[i]);
            y = max(y,nums[i]);
        }
        return gcd(x,y);
    }
};
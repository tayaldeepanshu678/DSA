class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            int x = nums[i];
            vector<int>a;
            while(x>0){
                a.push_back(x%10);
                x/=10;
            }
            reverse(a.begin(),a.end());
            for(int j : a){
                ans.push_back(j);
            }
        }
    return ans;
    }
};
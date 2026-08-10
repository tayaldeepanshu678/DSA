class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>fre(nums.size(),0);
        vector<int>ans;
        for(int x : nums){
            fre[x]++;
        }
        for(int i = 0; i<nums.size(); i++){
            if(fre[i] == 2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
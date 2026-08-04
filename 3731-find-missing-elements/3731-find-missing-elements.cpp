class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        auto mini = *min_element(nums.begin(),nums.end());
        auto maxi = *max_element(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        for(int x : nums){
            mpp[x]++;
        }
        for(int x = mini; x<=maxi; x++){
            if(mpp[x]==0){
                ans.push_back(x);
            }
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        // auto mini = *min_element(nums.begin(),nums.end());
        // auto maxi = *max_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int x : nums){
            mini = min(mini,x);
            maxi = max(maxi,x);
            mpp[x]++;
        }
        for(int x = mini; x<=maxi; x++){
            if(mpp[x]==0){
                ans.push_back(x);
            }
        }
        // tc is o(n+p(traversing))
        // sc is o(m(storing it in vector)+k(using mpp))
        // doesn't need to sort them as they are running from mini to maxi;
        // sort(ans.begin(),ans.end());
        return ans;
    }
};
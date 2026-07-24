class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        // unordered_set<long long>st;
        unordered_set<long long>ans;
        unordered_set<long long>ans_final;
        // for(int i = 0; i<nums.size(); i++){
        //                 st.insert(nums[i]);
        //             // cout<<ans;
        //             // st.insert(ans);
        //         }

        // for(int p : st){
        //     for(int n : nums){
        //         ans.insert(p^n);
        //     }
        // }
        for(int i = 0; i<nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                ans.insert(nums[i]^nums[j]);
            }
        }
        for(int x : ans){
            for(int r : nums){
                ans_final.insert(x^r);
            }
        }
        return ans_final.size();
    }
};
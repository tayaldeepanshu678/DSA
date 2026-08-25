class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>hash;
        for(int i = 0; i<nums.size(); i++){
            hash.insert(nums[i]);
        }
        int num = k;
        while(hash.count(num)){
            num+=k;
        }
    return num;
    }
};
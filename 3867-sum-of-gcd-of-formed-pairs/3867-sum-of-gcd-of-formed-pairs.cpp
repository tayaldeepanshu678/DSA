class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int k = nums.size();
        vector<int>prefixgcd;
        long long gcdd;
        long long sum = 0;
        int mx = nums[0];
        for(int i = 0; i<k; i++){
            mx = max(mx,nums[i]);
            prefixgcd.push_back(gcd(nums[i],mx));
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        // if(prefixgcd.size()%2!=0){
        //     gcdd = gcd(prefixgcd[0],prefixgcd[prefixgcd.size()-1]);
        //     sum = gcdd;
        // }
        // else{
            int i = 0;
            int j = prefixgcd.size()-1;
            while(i<j){ 
            gcdd = gcd(prefixgcd[i],prefixgcd[j]);
            sum+=gcdd;
            i++;
            j--;
        }
    // }
    return sum;
    }
};
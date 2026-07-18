class Solution {
public:
    int thirdMax(vector<int>& nums) {
    long long large = LLONG_MIN;
	long long seclarge = LLONG_MIN;
	long long thlarge = LLONG_MIN;

    for(int i = 0;i<nums.size(); i++){ 
        if(nums[i]==large || nums[i]==seclarge || nums[i]==thlarge){
            continue;
        }
		if(nums[i]>large){
            thlarge = seclarge;
			seclarge = large;
			large = nums[i];
		}
		else if(nums[i]>seclarge && nums[i]!=large){
			thlarge = seclarge;
			seclarge = nums[i];
		}
		else{ 
			if(nums[i]>thlarge && nums[i]!=seclarge){
				thlarge = nums[i];
                // cout<<thlarge;
			}
		}
    }
    if(thlarge==LLONG_MIN){
        thlarge = large;
    }
    return thlarge;
    }
};
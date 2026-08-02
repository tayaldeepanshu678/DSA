class Solution {
public:
    int capacity(vector<int>& weights, int capt){
        int reqdays = 1;
        int load = 0;
        for(int i = 0; i<weights.size(); i++){
            if((load+weights[i])>capt){
                load = weights[i];
                reqdays = reqdays+1;
            }
            else{
                load+=weights[i];
            }
        }
        return reqdays;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid = (low+high)/2;
            int no_of_days = capacity(weights,mid);
            if(no_of_days<=days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
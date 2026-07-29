class Solution {
public:
    bool bouquets(vector<int>& bloomDay,int mid, int m, int k){
        int cnt = 0;
        int sum = 0;
        for(int i = 0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=mid){
                cnt++;
            }
            else{
                sum+=cnt/k;
                cnt=0;
            }
        }
        sum+=cnt/k;
        return sum>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m*1LL*k*1LL;
        if(val>bloomDay.size()){
            return -1;
        }
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = (low+high)/2;
            if(bouquets(bloomDay,mid,m,k)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
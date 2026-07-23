class Solution {
public:
    long long eating(vector<int>&piles,int mid){
        long long totalhours = 0;
        for(int i = 0; i<piles.size(); i++){
            totalhours+= ceil((double)piles[i]/(double)mid);
        }
        return totalhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        long long ans = 0;
        int maxi = piles[0];
        long long totalhours;
        for(int i = 0; i<piles.size(); i++){
            maxi = max(maxi,piles[i]);
        }
        long long high = maxi;;
        while(low<=high){
            int mid = (low+high)/2;
            totalhours = eating(piles,mid);
            if(totalhours<=h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
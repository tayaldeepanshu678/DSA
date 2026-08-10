class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int,int>mpp;
        int maxc = 0;
        int maxv = 0;
        for(char ch : s){
            mpp[ch]++;
        }
        for(auto it : mpp){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' || it.first == 'u'){
                maxv = max(maxv,it.second);
            }
            else{
                maxc = max(maxc,it.second);
            }
        }
        return maxv+maxc;
    }
};
class Solution {
public:
    int maxProduct(int n) {
        int product=0;
        vector<int>ans;
        while(n>0){
            int digit = n%10;
            ans.push_back(digit);
            n/=10;
        }
        for(int i = 0; i<ans.size(); i++){
            for(int j = i+1; j<ans.size(); j++){
                product = max(product, ans[i]*ans[j]);
            }
        }
        return product;
    }
};
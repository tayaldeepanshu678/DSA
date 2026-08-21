class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1){ 
            if(st.count(n)){
                return false;
            }
            st.insert(n);
            int res=0;
            while(n>0){
                int temp = n%10;
                res += temp*temp;
                n/=10;
            }
            n = res;
        }
        return true;
    }
};
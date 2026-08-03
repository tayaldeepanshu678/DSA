class Solution {
public:
    bool isUgly(int n) {
        if(n<=0){
            return false;
        }
        list<int>lt{2,3,5};
        int temp = n;
        for(auto i : lt){
            while(temp%i==0){
                temp=temp/i;
            }
        }
        if(temp==1){
            return true;
        }
        return false;
    }
};
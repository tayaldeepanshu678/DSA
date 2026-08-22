class Solution {
public:
    int div(int n){
        int num = n;
        int sum = 0;
        int pro = 1;
        while(n>0){
            int temp = n%10;
            sum+=temp;
            pro*=temp;
            n/=10;
        }
        return num%(sum+pro)==0;
    }
    bool checkDivisibility(int n) {
        if(n==0){
            return true;
        }
        return div(n);
    }
};
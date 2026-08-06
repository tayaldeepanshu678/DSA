class Solution {
public:
    int smallestNumber(int n, int t) {
        // if(n>=1 && n<=9){
        //     return t;
        // }
        while(true){ 
        int temp = n;
        int pro = 1;
            while(temp>0){
                int t1 = temp%10;
                pro*=t1;
                temp/=10;
            }
            if(pro%t==0){
                return n;
            }
            n++;
        }
        return -1;
    }
};
class Solution {
public:
    int countEven(int num) {
       int cnt = 0;
        for(int i = 2; i<=num; i++){
            int x = i;
            int sum= 0;
            while(x>0){
                int temp = x%10;
                sum+=temp;
                x/=10;
            }
            if(sum%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};
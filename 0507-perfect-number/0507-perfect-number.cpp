class Solution {
public:
int div(int num){
    int n = num;
    int sum = 0;
    for(int i = 1; i<num; i++){
        if(num%i==0){
            sum+=i;        }
    }
    if(sum==n){
        return 1;
    }
    return 0;
}
    bool checkPerfectNumber(int num) {
        return div(num);
    }
};
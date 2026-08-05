class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int p = 2*t;
        while(p>0){
            num++;
            p--;
        }
        return num;
    }
};
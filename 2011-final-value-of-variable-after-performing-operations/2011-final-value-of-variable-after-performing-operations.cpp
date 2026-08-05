class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        int x = 0;
        for(int i = 0; i<operations.size(); i++){
            string ch = operations[i];
            for(int j = 1; j<ch.size(); j++){
                if(ch[j]=='-'){
                   ans = --x;
                   break;
                    
                }
                else{
                   ans = ++x;
                   break;
                }
            }
        }
        return ans;
    }
};
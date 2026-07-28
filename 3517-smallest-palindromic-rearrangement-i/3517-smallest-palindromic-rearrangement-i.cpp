class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1){
            return s;
        }
        string str = "";
        char mid;
        if(s.size()%2!=0){
            mid = s[(s.size()/2)];
        }
        for(int i = 0; i<s.size()/2; i++){
            str.push_back(s[i]);
        }
        sort(str.begin(),str.end());
        string rev = str;
        reverse(rev.begin(),rev.end());
        // str+=rev;
        if(s.size()%2!=0){
           string gtr =  str + mid + rev;
           return gtr;
        }
        return str + rev;
    }
};
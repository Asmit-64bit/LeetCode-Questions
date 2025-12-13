class Solution {
public:
    bool hasSameDigits(string s) {
       const int n=s.size();
        for(int i=n-1; i>1; i--){
            for(int j=0; j<i; j++){
                s[j]=(s[j]+s[j+1])%10;
            }
        }
        return s[0]==s[1]; 
    }
};
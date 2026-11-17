class Solution {
public:
    string baseNeg2(int n) {
        if(n==0){
            return "0";
        }
        string s="";
        while(abs(n)>0){
            int rem=n%-2;
            n=n/-2;
            if(rem<0){
                rem+=2;
                n+=1;
            }
            s+=to_string(abs(rem));
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
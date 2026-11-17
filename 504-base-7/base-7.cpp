class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){
            return "0";
        }
        bool nega=false;
        if(num<0){
            nega=true;
            num=-1*num;
        }
        string s="";
        while(num>0){
            int rem=num%7;
            num=num/7;
            s+=to_string(rem);
        }
        if(nega){
            s+="-";
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
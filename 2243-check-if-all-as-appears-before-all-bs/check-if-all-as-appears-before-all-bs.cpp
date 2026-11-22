class Solution {
public:
    bool checkString(string s) {
        bool ab=true;
        int ib;
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                ib=i;
                break;
            }
        }
        for(int i=ib+1;i<s.length();i++){
            if(s[i]=='a'){
                ab=false;
                break;
            }
        }
        return ab;
    }
};
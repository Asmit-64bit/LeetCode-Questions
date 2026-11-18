class Solution {
public:
    string toHex(int num) {
        if(!num){
            return "0";
        }
        unsigned int num1=num;
        string res;
        string hex="0123456789abcdef";
        while(num1){
            res+=hex[num1 % 16];
            num1/=16;
        }
        reverse(res.begin(), res.end());
        return res; 
    }
};
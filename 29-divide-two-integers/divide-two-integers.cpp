class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        long long dvd = llabs(dividend), dvr = llabs(divisor);
        int res=0;
        while(dvr<=dvd) {
            long int mul=dvr, tmp=1;
            while(mul<=dvd-mul) {
                mul+=mul;
                tmp+=tmp;
            }
            res+=tmp;
            dvd-=mul;
        }
        if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)){
            return -res;
        } 
        return res;
    }
};
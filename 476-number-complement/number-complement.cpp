class Solution {
public:
    int findComplement(int num) {
        if(num==0) return 1;
        int mask=0,n=num;
        while(n>0){
            mask=(mask<<1)|1;
            n>>=1;
        }
        return num^mask;
    }
};
class Solution {
    public int countDigits(int num) {
        int holder=num;
        int count=0;
        while(holder>0){
            if(num%(holder%10)==0){
                count++;
            }
                holder=holder/10;
        }
        return count;
    }
}
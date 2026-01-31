class Solution {
    public int balancedStringSplit(String s) {
        int r=0,l=0,count=0;
        char[] c = s.toCharArray();
        for(int i=0;i<c.length;i++){
            if(c[i]=='L'){
                l++;
            }
            else{
                r++;
            }
            if(l==r){
                count++;
            }
        }
        return count;
    }
}
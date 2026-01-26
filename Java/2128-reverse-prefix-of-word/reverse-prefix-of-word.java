class Solution {
    public String reversePrefix(String word, char ch) {
        StringBuilder str=new StringBuilder(word);
        int i=word.indexOf(ch); 
        if(i==-1) return word;
        int l=0,r=i;
        while(l<r){
            char temp= str.charAt(l);
            str.setCharAt(l, str.charAt(r));
            str.setCharAt(r,temp);
            l++;
            r--;
        }
        return str.toString();
    }
}
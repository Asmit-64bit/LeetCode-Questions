class Solution {
    public String reversePrefix(String s, int k) {
        char[] c = s.toCharArray();
        int i = 0;
        k = k - 1;
        while (i < k) {
            char temp=c[i];
            c[i]=c[k];
            c[k]=temp;
            i++;
            k--;
        }
        return new String(c);
    }
}
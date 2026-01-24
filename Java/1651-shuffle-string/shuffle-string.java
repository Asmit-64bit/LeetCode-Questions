class Solution {
    public String restoreString(String s, int[] indices) {
        char[] c = s.toCharArray();
        char[] res = new char[c.length];
        for(int i=0;i<c.length;i++){
            res[indices[i]] = c[i];
        }
        String ans = new String(res);
        return ans;
    }
}
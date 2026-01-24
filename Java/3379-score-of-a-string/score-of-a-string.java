class Solution {
    public int scoreOfString(String s) {
        char[] c = s.toCharArray();
        int score = 0;
        for(int i = 0; i<c.length-1; i++){
            int x=c[i]-c[i+1];
            score+=Math.abs(x);
        }
        return score;
    }
}
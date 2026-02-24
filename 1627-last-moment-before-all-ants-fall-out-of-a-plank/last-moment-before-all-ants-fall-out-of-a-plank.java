class Solution {
    public int getLastMoment(int n, int[] left, int[] right) {
        int count = 0;
        for(int ant:left){
            count = Math.max(count, ant);
        }
        for(int ant:right){
            count = Math.max(count, n - ant);
        }   
        return count;
    }
}
class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int X=0;
        for(int i=0;i<operations.length;i++){
        X+=(operations[i].equals("X++") || operations[i].equals("++X"))?1:-1;
        }
        return X;
    }
}
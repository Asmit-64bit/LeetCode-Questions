class Solution {
    public int[] recoverOrder(int[] order, int[] friends) {
        int[] temp = new int[order.length]; // Max possible size
        int count = 0;

        for (int i = 0; i < order.length; i++) {
            for (int j = 0; j < friends.length; j++) {
                if (order[i] == friends[j]) {
                    temp[count] = order[i];
                    count++;
                    break;
                }
            }
        }
        return Arrays.copyOf(temp, count);
    }
}
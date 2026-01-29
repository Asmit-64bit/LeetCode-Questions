class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        Set<Integer> repeat = new HashSet<>();
        int[] res = new int[2];
        int i = 0;
        for (int num : nums) {
            if (repeat.contains(num)) {
                if (i < 2) {
                    res[i++] = num;
                }
            } else {
                repeat.add(num);
            }
        }
        return res;
    }
}
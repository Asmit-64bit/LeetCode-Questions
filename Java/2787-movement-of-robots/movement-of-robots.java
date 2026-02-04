class Solution {
    int MOD = 1000000007;
    public int sumDistance(int[] nums, String s, int d) {
        int n = nums.length;
        long[] ans = new long[n];
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == 'L') {
                ans[i] = (long)nums[i] - d;
            } else {
                ans[i] = (long)nums[i] + d;
            }
        }
        Arrays.sort(ans);
        long res = 0;
        for (int i = 0; i < n; i++) {
            res = (res + ans[i] * i) % MOD;
            res = (res - ans[i] * (n-i-1) + MOD) % MOD;
        }
        return (int)res;
    }
}
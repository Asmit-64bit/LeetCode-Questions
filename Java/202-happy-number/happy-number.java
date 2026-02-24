class Solution {
    public boolean isHappy(int n) {
        Set<Integer> visit = new HashSet<>();       
        while (!visit.contains(n)) {
            visit.add(n);
            int ans = 0;   
            while (n > 0) {
                int digit = n % 10;
                ans += digit * digit;
                n = n / 10;
            }         
            if (ans == 1) {
                return true;
            }
            n = ans; 
        }       
        return false;
    }
}
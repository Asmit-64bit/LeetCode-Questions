class Solution {
public:
    int totalMoney(int n) {
        int w=n/7;
        int d=n%7;
      return 7*((w*(w+1)/2) + 3*w) + (d*(d+1)/2) + d*w;
    }
};
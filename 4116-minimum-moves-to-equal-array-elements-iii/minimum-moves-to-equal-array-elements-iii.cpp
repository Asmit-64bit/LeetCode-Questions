class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=0;
        int sum=0;
        int n=0;
        for(int x : nums){
            if(x>max) max=x;
            sum+=x;
            n++;
        }
        return max*n-sum;
    }
};
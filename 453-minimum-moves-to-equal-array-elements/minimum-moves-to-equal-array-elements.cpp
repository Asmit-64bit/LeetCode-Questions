class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int min_e=INT_MAX;
        for(int x : nums){
            sum+=x;
            min_e=min(min_e, x);
        }
        return sum-n*min_e; 
    }
};
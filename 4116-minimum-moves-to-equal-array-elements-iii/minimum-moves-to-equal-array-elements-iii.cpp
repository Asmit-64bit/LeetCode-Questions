class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int max=nums[0];
        int count=0;
        for(int x : nums){
            count+=max-x;
        }
        return count;
    }
};
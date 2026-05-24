class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> preSum(n+1,0);
        for(int i=1;i<n+1;i++){
            preSum[i]=preSum[i-1]+nums[i-1];
        }
        int idx=0;
        while(idx<n){
            int left=preSum[idx];
            int right=preSum[n]-preSum[idx+1];
            if(left==right){
                return idx;
            }
            idx++;
        }
        return -1;
    }
};
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int minPos=INT_MAX;
        for(int i=0;i<n;i++){
            int curr=0;
            for(int j=i;j<n && (j-i+1)<=r;j++){
                curr+=nums[j];
                int ln=j-i+1;
                if(ln>=l && ln<=r && curr>0){
                    minPos=min(minPos,curr);
                }
            }
        }
        return minPos == INT_MAX? -1:minPos;
    }
};
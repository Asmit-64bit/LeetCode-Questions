class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int sti=1,std=1,mci=1,mcd=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                sti++;
                std=1;
            }
            else if(nums[i]>nums[i+1]){
                std++;
                sti=1;
            }
            else{
                sti=1;
                std=1;
            }
            if(mci<sti){
                mci=sti;
            }
            if(mcd<std){
                mcd=std;
            }
        }
        return max(mci,mcd);
    }
};
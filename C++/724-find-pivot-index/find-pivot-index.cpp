class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(auto x:nums){
            total+=x;
        }
        int rightSum=total;
        int leftSum=0;
        for(int i=0;i<nums.size();i++){
            rightSum-=nums[i];
            if(rightSum==leftSum){
                return i;
                break;
            }
            leftSum+=nums[i];
        }
        return -1;
    }
};
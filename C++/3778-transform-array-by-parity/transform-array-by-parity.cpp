class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for (auto &i:nums){
            i=i%2;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k %= n;
        if (k == 0) return;
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.begin(),nums.end());
    }
};
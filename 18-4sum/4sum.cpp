class Solution {
public:
    vector<vector<int>> kSum(vector<int>& nums, long long target, int start, int k) {
        vector<vector<int>> res;
        if (start == nums.size() || (long long)nums[start] * k > target || target > (long long)nums.back() * k) {
            return res;
        }
        if (k == 2) {
            long long left = start, right = nums.size() - 1;
            while (left < right) {
                long long sum = (long long)nums[left] + nums[right];
                if (sum == target) {
                    res.push_back({nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
            return res;
        }
        for (int i = start; i < nums.size(); ++i) {
            if (i == start || nums[i] != nums[i - 1]) {
                for (vector<int>& subset : kSum(nums, target - nums[i], i + 1, k - 1)) {
                    res.push_back({nums[i]});
                    res.back().insert(res.back().end(), subset.begin(), subset.end());
                }
            }
        }
        return res;
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        return kSum(nums, target, 0, 4); 
    }
};
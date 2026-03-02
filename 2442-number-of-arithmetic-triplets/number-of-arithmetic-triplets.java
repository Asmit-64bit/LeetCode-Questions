class Solution {
    public int arithmeticTriplets(int[] nums, int diff) {
        int n = nums.length;
        int count = 0;
        for(int i = n-1; i >= 2; --i)
        {
            for(int j = n-2; j >= 1; --j)
            {
                for(int k = n-3; k >= 0; --k)
                {
                    if(nums[i]-nums[j] == diff && nums[j]-nums[k] == diff)
                        count++;
                }
            }
        }
        return count;
    }
}
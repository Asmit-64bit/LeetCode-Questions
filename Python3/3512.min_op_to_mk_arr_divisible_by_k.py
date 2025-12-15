from typing import List

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        sum = 0
        count = 0
        for i in range(len(nums)):
            sum += nums[i]
        while sum % k != 0:
            sum -= 1
            count += 1
        return count
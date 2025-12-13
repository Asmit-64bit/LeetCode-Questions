/**
 * @param {number[]} nums
 * @return {number}
 */
var differenceOfSum = function(nums) {
    const sum1 = nums.reduce((prev, curr) => prev + curr);
    const sum2 = nums.join('').split('').reduce((prev, curr) => parseInt(prev) + parseInt(curr));
  return sum1 - sum2;
};
/**
 * @param {number[]} nums
 * @return {number}
 */
var minOperations = function(nums) {
    let length = nums.length;

    nums = [...new Set(nums)];
    nums.sort((a, b) => (a - b));

    let end = 0;
    let max = -Infinity;
    for(let start = 0; start < nums.length; start++) {
        while(nums[end] < nums[start] + length && end < nums.length) {
            end += 1;
        }
        let candidateCount = end - start;
        max = Math.max(max, candidateCount);
    }

    return length - max;
};
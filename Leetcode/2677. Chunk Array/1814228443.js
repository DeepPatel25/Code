/**
 * Splits an array into groups (chunks) of a specified size.
 *
 * @param {Array} arr - The input array to be split.
 * @param {number} size - The maximum size of each chunk.
 * @returns {Array[]} A new array containing chunks of the original array.
 *
 * @example
 * chunk([1, 2, 3, 4, 5], 2);
 * // Output: [[1, 2], [3, 4], [5]]
 */
var chunk = function(arr, size) {
    // Edge case: if size is invalid, return an empty array
    if (!Array.isArray(arr) || size <= 0) return [];

    const result = [];

    // Iterate through array in steps of `size`
    for (let i = 0; i < arr.length; i += size) {
        // Slice creates a subarray from i to i + size (non-inclusive)
        result.push(arr.slice(i, i + size));
    }

    return result;
};

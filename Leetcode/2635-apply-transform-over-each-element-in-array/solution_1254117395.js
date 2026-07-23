/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var newArr = [];
    arr.forEach((val, i) => {
        newArr[i] = fn(val, i);
    });

    return newArr;
};
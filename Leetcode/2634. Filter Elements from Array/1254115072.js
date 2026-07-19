/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var newArray = arr.filter((val, i) => {
        if(fn(val, i)) {
            return true;
        }
        return false;
    });

    return newArray;
};
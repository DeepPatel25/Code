/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    const arr1 = [];

    for(let i = 0; i < arr.length;) {
        let temp = [];
        let k = size;

        while(k-- && i < arr.length)
            temp.push(arr[i++]);
        
        arr1.push(temp);
    }

    return arr1;
};

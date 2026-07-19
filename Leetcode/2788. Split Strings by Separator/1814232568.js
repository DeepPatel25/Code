/**
 * @param {string[]} words
 * @param {character} separator
 * @return {string[]}
 */
var splitWordsBySeparator = function(words, separator) {
    let result = [];

    for(let i = 0; i < words.length; i++) {
        result = [...result, ...(words[i].split(separator))];
    }

    return result.filter(val => val != "");
};
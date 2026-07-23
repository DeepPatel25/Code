/**
 * Splits each word in the input array by a given separator
 * and returns all resulting non-empty substrings in a single array.
 *
 * @param {string[]} words - The array of words to be split.
 * @param {string} separator - The character used to split each word.
 * @returns {string[]} A flattened array of non-empty substrings.
 *
 * @example
 * splitWordsBySeparator(["one.two", "three.four"], ".");
 * // Output: ["one", "two", "three", "four"]
 *
 * @example
 * splitWordsBySeparator(["a,b,,c"], ",");
 * // Output: ["a", "b", "c"]
 */
var splitWordsBySeparator = function(words, separator) {
    // Edge case: empty input or invalid separator
    if (!Array.isArray(words) || typeof separator !== "string" || separator.length === 0) {
        return [];
    }

    // Use flatMap for cleaner flattening and filtering
    return words.flatMap(word => 
        word.split(separator).filter(Boolean) // Removes empty strings
    );
};

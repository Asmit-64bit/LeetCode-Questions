/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let a=s.split('').reverse().join('');
    b = a.trim();
    let words = a.split(/\s+/);
    words.reverse();
    return words.join(" ");
    return b;
};
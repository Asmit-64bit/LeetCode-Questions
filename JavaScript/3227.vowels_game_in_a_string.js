/**
 * @param {string} s
 * @return {boolean}
 */
var doesAliceWin = function(s) {
    const vowels = "aeiou";
    for (const char of s) {
          if (vowels.includes(char)) {
             return true;
        }
    }
    return false;
};
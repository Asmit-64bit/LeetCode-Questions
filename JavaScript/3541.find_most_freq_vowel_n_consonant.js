/**
 * @param {string} s
 * @return {number}
 */
var maxFreqSum = function(s) {
    const vowels = 'aeiou';
    const freqV = {};
    const freqC = {};
    for(const c of s) {
        if(vowels.includes(c)) {
            freqV[c] = (freqV[c] || 0) + 1;
        } else {
            freqC[c] = (freqC[c] || 0) + 1;
        }
    }
    return Math.max(...Object.values(freqV), 0) + Math.max(...Object.values(freqC), 0);
};
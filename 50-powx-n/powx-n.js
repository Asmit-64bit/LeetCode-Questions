/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
    let num = n;
    if (num === 0) return 1;
    if (num < 0) {
        num = -num;
    }
    let res = 1;
    while (num > 0) {
        if (num % 2 === 1) {
            res = res * x;
        }
        x = x * x;
        num = Math.floor(num / 2);
    }    
    return n < 0 ? 1 / res : res;
};
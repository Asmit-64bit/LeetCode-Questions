/**
 * @param {number} num
 * @param {number} sum
 * @return {string}
 */
var maxSumOfSquares = function(num, sum) {
    let res="";
    for (let i=1; i<=num; i++) {
        let a=Math.min(9, sum);
        res+=a.toString();
        sum-=a;
    }
    if (sum!==0) return "";
    return res;
};
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let ans= x.toString().split('').reverse().join('');
    if (x==ans)
    {
        return true;
    }
    else
    {
        return false;
    }
};
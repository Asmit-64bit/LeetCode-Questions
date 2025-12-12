/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
      const res = Math.abs(x).toString().split('').reverse().join('');
  if (res > Math.pow(2,31)) return 0;
  return res * Math.sign(x);
};
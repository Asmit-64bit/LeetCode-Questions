/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    let a=1;
    while(a*a<=x){
        a++;
    }
    return a-1;
};
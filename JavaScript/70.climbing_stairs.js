/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    if(n<=3){
        return n;
    }
    let a=3;
    let b=2;
    let c=0;
    for(let i=3;i<n;i++){
        c=a+b;
        b=a;
        a=c;
    }
    return c;
};
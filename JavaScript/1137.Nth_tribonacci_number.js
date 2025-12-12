/**
 * @param {number} n
 * @return {number}
 */
var tribonacci = function(n) {
    let a=0;
    let b=1;
    let c=1;
    let next;
    for(let i=0;i<n;i++){
        next=a+b+c;
        a=b;
        b=c;
        c=next;
    }
    return a;
};
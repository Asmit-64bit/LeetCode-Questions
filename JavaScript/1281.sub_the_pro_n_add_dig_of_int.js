/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    let a=n.toString().split('').map(Number);
    let p=1;
    let q=0;
    for(let i=0;i<a.length;i++){
        p*=a[i];
        q+=a[i];
    }
    return p-q;
};
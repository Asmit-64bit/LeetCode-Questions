/**
 * @param {number} a
 * @param {number} b
 * @return {number}
 */
var getSum = function(a, b) {
while(b!==0){
    let ans=(a&b)<<1;
    a=a^b;
    b=ans;
}
return a;
};
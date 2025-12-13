/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var findClosest = function(x, y, z) {
   const a=Math.abs(x-z);
   const b=Math.abs(y-z);
   if(a==b){
    return 0;
   }
   else if(a<b){
    return 1;
   }
   else{
    return 2;
   }
};
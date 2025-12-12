/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
   let a=0;
   let b=1;
   for(let i=0;i<n-1;i++) {
    ans=a+b;
    a=b;
    b=ans;
   }
   if(n==0){
    return 0;
   }
   else if(n==1){
    return 1;
   }
   else{
   return ans;
   }
};
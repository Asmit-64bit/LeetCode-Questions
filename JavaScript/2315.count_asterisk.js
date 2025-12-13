/**
 * @param {string} s
 * @return {number}
 */
var countAsterisks = function(s) {
               let ans=0;
               let a=1;
               for (const c of s){
                if (c=='*'){
                    ans+=a;
                }
                else if (c=='|'){
                    a^=1;
                }
               }
               return ans;
};
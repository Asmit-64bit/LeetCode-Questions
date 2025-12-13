/**
 * @param {number} n
 * @param {number} m
 * @return {number}
 */
var differenceOfSums = function(n, m) {
    var a=new Array();
    for(let i=1;i<=n;i++){
        a[i]=i;
    }
        let num=0;
        let num1=0;
        for(let j=1;j<a.length;j++)
    if(j%m==0){
        num+=j;
    }
    else{
        num1+=j;
    }
    return num1-num;
};
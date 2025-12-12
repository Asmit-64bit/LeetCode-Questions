class Solution {
public:
    bool isPowerOfTwo(int n) {
         bool x=false;
    for(int i=0;pow(2,i)<=n;i++){
        if(n==pow(2,i)){
            x=true;
            break;
        }
 else{
    continue;
 }
    }
    return x;  
    }
};
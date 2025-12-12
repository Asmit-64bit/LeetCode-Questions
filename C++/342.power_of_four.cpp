class Solution {
public:
    bool isPowerOfFour(int n) {
      bool x=false;
    for(int i=0;pow(4,i)<=n;i++){
        if(n==pow(4,i)){
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
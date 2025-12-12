class Solution {
public:
    bool isPowerOfThree(int n) {
      bool x=false;
    for(int i=0;pow(3,i)<=n;i++){
        if(n==pow(3,i)){
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
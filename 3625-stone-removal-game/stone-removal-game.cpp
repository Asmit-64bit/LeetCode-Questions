class Solution {
public:
    bool canAliceWin(int n) {
        int r=10;
        bool alice=true;
        while(n>=r){
            n-=r;
            r--;
            alice=!alice;
        }
        return !alice;
    }
};
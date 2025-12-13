class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        bool x,y;
        if ((coordinate1[0]+ coordinate1[1]) % 2 == 0)
            x=false;
        else
            x=true;
        if ((coordinate2[0]+ coordinate2[1]) % 2 == 0)
            y=false;
        else
            y=true;
        if(x==y)
        return true;
        else
        return false;
    }
};
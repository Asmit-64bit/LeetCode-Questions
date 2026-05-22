class Solution {
public:
    bool judgeCircle(string moves) {
        int XAxis = 0;
        int YAxis = 0;
        int n = moves.size();
        for (int i=0;i<n;i++) {
            if (moves[i]=='U')
                YAxis++;
            else if (moves[i]=='D')
                YAxis--;
            else if (moves[i]=='R')
                XAxis++;
            else
                XAxis--;
        }
        if (XAxis == 0 && YAxis == 0)
            return 1;
        else
            return 0;
    }
};
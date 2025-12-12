class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(int i=0;i<operations.size();i++)
        X+=(operations[i]=="X++"||operations[i]=="++X")?1:-1;
        return X;
    }
};
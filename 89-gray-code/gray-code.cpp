class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>a;
        int total = 1<<n;
        for(int i=0; i<total; i++)
            a.push_back(i^(i>>1));
        return a;
    }
};
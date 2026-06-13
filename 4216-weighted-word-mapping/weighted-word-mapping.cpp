class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res;
        for(const string word : words){
            int sum=0;
            for(char ch: word){
                sum+=weights[ch-'a'];
            }
            int value = sum%26;
            res.push_back(char('z'-value));
        }
        return res;
    }
};
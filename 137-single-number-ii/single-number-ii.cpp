class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freqMap;     
        for (int n : nums) {
            freqMap[n]++;
        }
        for (auto [number, freq] : freqMap) {
            if (freq == 1) {
                return number;
            }
        }
        return -1;
    }
};
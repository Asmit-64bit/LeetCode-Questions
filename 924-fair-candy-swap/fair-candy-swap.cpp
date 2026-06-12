class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0;
        int sumB = 0;
        for (int i : aliceSizes) sumA += i;
        for (int j : bobSizes) sumB += j;
        int diff = (sumA - sumB) / 2;
        unordered_set<int> aliceSet(aliceSizes.begin(), aliceSizes.end());
        for (int x : bobSizes) {
            int y = x + diff;
            if (aliceSet.count(y)) {
                return {y, x};
            }
        }
        return {};
    }
};
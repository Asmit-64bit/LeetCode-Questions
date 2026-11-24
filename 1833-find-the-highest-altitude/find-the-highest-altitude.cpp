class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxPeak=0, n=gain.size();
        vector<int> peak(n+1,0);
        for(int i=1;i<n+1;i++){
            peak[i]=peak[i-1]+gain[i-1];
            if(peak[i]>maxPeak){
                maxPeak=peak[i];
            }
        }
        return maxPeak;
    }
};
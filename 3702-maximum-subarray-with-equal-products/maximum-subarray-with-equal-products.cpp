class Solution {
public:
    long long findGcd(int a, int b){
        if(b==0){
            return a;
        }
        return findGcd(b,a%b);
    }
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int maxi =0;
        for(int i=0;i<n; i++){
            long long gcd=0, lcm=1, pro=1;
            for(int j=i;j<n;j++){
                if(pro > LLONG_MAX/nums[j]){
                    break;
                }
                pro*=nums[j];
                gcd = findGcd(gcd,nums[j]);
                lcm = (lcm/findGcd(lcm,nums[j]))*nums[j];
                if(pro==gcd*lcm){
                    maxi=max(maxi,j-i+1);
                }
                else if(j>i && pro > gcd*lcm){
                    break;
                }
            }
        }
        return maxi;
    }
};
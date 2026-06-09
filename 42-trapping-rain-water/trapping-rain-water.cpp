class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0,left=0,right=height.size()-1, last=0;
        while(left<right){
            if(height[left]<=height[right]){
                if(height[left]>last) {
                    ans+=(right-left-1)*(height[left]-last);
                    ans-=last;
                    last=height[left];
                } else {
                    ans-=height[left];
                }
                left++;
            } 
            else{
                if(height[right]>last){
                    ans+=(right-left-1)*(height[right]-last);
                    ans-=last;
                    last=height[right];
                } 
                else{
                    ans-=height[right];
                }
                right--;
            }
        }
        return ans;
    }
};
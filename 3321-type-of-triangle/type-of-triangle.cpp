class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];
        float s = (a+b+c)/2.0;
        float v = (s-a) * (s-b) * (s-c);
        if(v<=0){
            return "none";
        }
        else{
            string types[] ={"scalene","isosceles","","equilateral"};
            return types[(a==b)+(b==c)+(a==c)];
        }
    }
};
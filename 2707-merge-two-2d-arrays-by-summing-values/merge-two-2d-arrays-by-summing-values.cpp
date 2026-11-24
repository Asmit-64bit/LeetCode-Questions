class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int id1=0, id2 = 0;
        vector<vector<int>> res;

        while(id1<n1&&id2<n2){
            vector<int> temp;
            if(nums1[id1][0] == nums2[id2][0]){
                temp.push_back(nums1[id1][0]);
                temp.push_back(nums1[id1][1]+nums2[id2][1]);
                res.push_back(temp);
                id1++,id2++;
            }
            else if(nums1[id1][0] < nums2[id2][0]){
                temp.push_back(nums1[id1][0]);
                temp.push_back(nums1[id1][1]);
                res.push_back(temp);
                id1++;
            }
            else{
                temp.push_back(nums2[id2][0]);
                temp.push_back(nums2[id2][1]);
                res.push_back(temp);
                id2++;
            }
        }
        while(id1 < n1) {
            vector<int> temp;
            temp.push_back(nums1[id1][0]);
            temp.push_back(nums1[id1][1]);
            res.push_back(temp);
            id1++;
        }
        while(id2 < n2) {
            vector<int> temp;
            temp.push_back(nums2[id2][0]);
            temp.push_back(nums2[id2][1]);
            res.push_back(temp);
            id2++;
        }
        return res;
    }
};
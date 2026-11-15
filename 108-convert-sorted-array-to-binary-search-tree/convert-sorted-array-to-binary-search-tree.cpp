/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
TreeNode* buildBST(vector<int>& nums, int l, int r){
    if(l>r){
        return NULL;
    }
    int mid=l+(r-l)/2;
    TreeNode* root= new TreeNode(nums[mid]);
    root->left=buildBST(nums, l, mid-1);
    root->right=buildBST(nums,mid+1,r);
    return root;
}
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;
        return buildBST(nums, left, right);
    }
};
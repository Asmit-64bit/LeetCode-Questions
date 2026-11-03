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
 int height(TreeNode* root){
    if(root == nullptr){
        return -1;
    }
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight, rHeight) + 1;
}
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        int lHeight = height(root->left);
        int rHeight = height(root->right);
        return abs(lHeight - rHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};
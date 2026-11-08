/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
void dfs(TreeNode* node, int currentSum, vector<int>& path, vector<vector<int>>& res) {
    if(!node){
        return;
    }
    path.push_back(node->val);
    if (!node->left && !node->right && currentSum == node->val) {
        res.push_back(path);
    } else {
        dfs(node->left, currentSum - node->val, path, res);
        dfs(node->right, currentSum - node->val, path, res);
    }
    path.pop_back();
}
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> path;
        dfs(root, targetSum, path, res);
        return res;
    }
};
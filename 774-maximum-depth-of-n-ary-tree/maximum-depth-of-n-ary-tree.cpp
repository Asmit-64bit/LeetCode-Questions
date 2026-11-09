/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
        }
        queue<Node*> q;
        q.push(root);
        int depth=0;
        while(!q.empty()){
            depth++;
            int breadth=q.size();
            for(int i=0;i<breadth;i++){
                auto node = q.front();
                q.pop();
                for(auto x : node->children){
                    if(x){
                        q.push(x);
                    }
                }
            }
        }
        return depth;
    }
};
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
    vector<int> ans;
    vector<int> postorder(Node* root) {
        if (!root) return ans;
        for(auto& child: root->children)
            postorder(child);
        ans.push_back(root->val);
        return ans;
    }
};

// Problem: N-ary Tree Preorder Traversal
// Link to the problem: https://leetcode.com/problems/n-ary-tree-preorder-traversal/
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

class Solution
{
public:
    vector<int> ans;
    vector<int> preorder(Node *root)
    {
        if (root == NULL)
        {
            return {};
        }
        Node *curr = root;
        ans.push_back(curr->val);
        for (int i = 0; i < curr->children.size(); i++)
        {
            preorder(curr->children[i]);
        }
        return ans;
    }
};
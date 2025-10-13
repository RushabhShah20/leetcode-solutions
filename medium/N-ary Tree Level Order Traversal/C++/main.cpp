// Problem: N-ary Tree Level Order Traversal
// Link to the problem: https://leetcode.com/problems/n-ary-tree-level-order-traversal/
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
    void levelOrder(Node *root, int level, vector<vector<int>> &res)
    {
        if (root == nullptr)
        {
            return;
        }
        if (res.size() <= level)
        {
            res.push_back({});
        }
        res[level].push_back(root->val);
        for (int i = 0; i < root->children.size(); i++)
        {
            levelOrder(root->children[i], level + 1, res);
        }
    }
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> ans;
        levelOrder(root, 0, ans);
        return ans;
    }
};
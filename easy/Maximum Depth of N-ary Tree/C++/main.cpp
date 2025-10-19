// Problem: Maximum Depth of N-ary Tree
// Link to the problem: https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
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
    int maxDepth(Node *root)
    {
        int ans = 0;
        if (root == NULL)
        {
            return ans;
        }
        for (Node *child : root->children)
        {
            int x = maxDepth(child);
            ans = max(ans, x);
        }
        return 1 + ans;
    }
};
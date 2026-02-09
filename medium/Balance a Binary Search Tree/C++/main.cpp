// Problem: Balance a Binary Search Tree
// Link to the problem: https://leetcode.com/problems/balance-a-binary-search-tree/
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
class Solution
{
public:
    vector<int> nodes;
    void inorder(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        inorder(root->left);
        nodes.push_back(root->val);
        inorder(root->right);
    }
    TreeNode *build(int l, int r)
    {
        if (l > r)
        {
            return nullptr;
        }
        const int m = l + (r - l) / 2;
        TreeNode *root = new TreeNode(nodes[m]);
        root->left = build(l, m - 1);
        root->right = build(m + 1, r);
        return root;
    }
    TreeNode *balanceBST(TreeNode *root)
    {
        inorder(root);
        return build(0, nodes.size() - 1);
    }
};
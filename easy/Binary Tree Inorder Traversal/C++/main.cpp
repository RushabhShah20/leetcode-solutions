// Problem: Binary Tree Inorder Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    vector<int> inorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> s;
        vector<int> res;
        do
        {
            while (root != NULL)
            {
                s.push(root);
                root = root->left;
            }
            if (!s.empty())
            {
                root = s.top();
                s.pop();
                res.push_back(root->val);
                root = root->right;
            }
        } while (root != NULL || !s.empty());
        return res;
    }
};
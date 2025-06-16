// Problem: Symmetric Tree
// Link to the problem: https://leetcode.com/problems/symmetric-tree/
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
    bool check(TreeNode *first, TreeNode *second)
    {
        if (!first && !second)
        {
            return true;
        }
        if (!first || !second)
        {
            return false;
        }
        if (first->val != second->val)
        {
            return false;
        }
        return check(first->left, second->right) && check(first->right, second->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
        {
            return true;
        }
        return check(root->left, root->right);
    }
};
// Problem: Balanced Binary Tree
// Link to the problem: https://leetcode.com/problems/balanced-binary-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int height(struct TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    const int l = height(root->left);
    if (l == -1)
    {
        return -1;
    }
    const int r = height(root->right);
    if (r == -1)
    {
        return -1;
    }
    if (abs(l - r) > 1)
    {
        return -1;
    }
    return fmax(l, r) + 1;
}
bool isBalanced(struct TreeNode *root)
{
    const bool ans = height(root) != -1;
    return ans;
}
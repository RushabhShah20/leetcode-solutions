// Problem: Search in a Binary Search Tree
// Link to the problem: https://leetcode.com/problems/search-in-a-binary-search-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode *searchBST(struct TreeNode *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->val == val)
    {
        return root;
    }
    if (root->val > val)
    {
        return searchBST(root->left, val);
    }
    return searchBST(root->right, val);
}
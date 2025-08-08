// Problem: Sum of Left Leaves
// Link to the problem: https://leetcode.com/problems/sum-of-left-leaves/
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
    int ans = 0;
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root->left != NULL)
        {
            if (root->left->left == NULL && root->left->right == NULL)
            {
                ans += root->left->val;
            }
            sumOfLeftLeaves(root->left);
        }
        if (root->right != NULL)
        {
            sumOfLeftLeaves(root->right);
        }
        return ans;
    }
};
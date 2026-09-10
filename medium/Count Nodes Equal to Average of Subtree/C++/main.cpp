// Problem: Count Nodes Equal to Average of Subtree
// Link to the problem: https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/
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
    pair<int, int> postOrder(TreeNode *root)
    {
        if (root == NULL)
        {
            return {0, 0};
        }
        pair<int, int> l = postOrder(root->left), r = postOrder(root->right);
        int x = l.first + r.first + root->val, y = l.second + r.second + 1;
        if (root->val == x / y)
        {
            ans++;
        }
        return {x, y};
    }
    int averageOfSubtree(TreeNode *root)
    {
        postOrder(root);
        return ans;
    }
};
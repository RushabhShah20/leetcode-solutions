// Problem: Construct String from Binary Tree
// Link to the problem: https://leetcode.com/problems/construct-string-from-binary-tree/
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
    string ans = "";
    string tree2str(TreeNode *root)
    {
        if (root == NULL)
        {
            return "";
        }
        ans += to_string(root->val);
        if ((root->left == NULL && root->right != NULL) || (root->left != NULL))
        {
            ans.append(1, '(');
            tree2str(root->left);
            ans.append(1, ')');
        }
        if (root->right != NULL)
        {
            ans.append(1, '(');
            tree2str(root->right);
            ans.append(1, ')');
        }
        return ans;
    }
};
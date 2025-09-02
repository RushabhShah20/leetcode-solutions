// Problem: Increasing Order Search Tree
// Link to the problem: https://leetcode.com/problems/increasing-order-search-tree/
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
    void inorder(TreeNode *root, vector<int> &a)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        vector<int> a;
        inorder(root, a);
        if (a.empty())
        {
            return nullptr;
        }
        TreeNode *ans = new TreeNode(a[0]);
        TreeNode *current = ans;
        for (int i = 1; i < a.size(); i++)
        {
            current->right = new TreeNode(a[i]);
            current = current->right;
        }
        return ans;
    }
};
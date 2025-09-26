// Problem: All Elements in Two Binary Search Trees
// Link to the problem: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
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
    vector<int> ans;
    void insertInArray(TreeNode *root)
    {
        if (root != NULL)
        {
            ans.push_back(root->val);
            if (root->left != NULL)
            {
                insertInArray(root->left);
            }
            if (root->right != NULL)
            {
                insertInArray(root->right);
            }
        }
    }
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        insertInArray(root1);
        insertInArray(root2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
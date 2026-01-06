// Problem: Maximum Level Sum of a Binary Tree
// Link to the problem: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/
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
    void levelOrder(TreeNode *root, int level, vector<int> &res)
    {
        if (root == nullptr)
        {
            return;
        }
        if (res.size() <= level)
        {
            res.push_back(0);
        }
        res[level] += (root->val);
        levelOrder(root->left, level + 1, res);
        levelOrder(root->right, level + 1, res);
    }
    int maxLevelSum(TreeNode *root)
    {
        vector<int> a;
        levelOrder(root, 0, a);
        const int ans = max_element(a.begin(), a.end()) - a.begin() + 1;
        return ans;
    }
};
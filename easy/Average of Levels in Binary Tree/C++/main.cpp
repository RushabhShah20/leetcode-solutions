// Problem: Average of Levels in Binary Tree
// Link to the problem: https://leetcode.com/problems/average-of-levels-in-binary-tree/
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
    void levelOrder(TreeNode *root, int level, vector<vector<int>> &res)
    {
        if (root == nullptr)
        {
            return;
        }
        if (res.size() <= level)
        {
            res.push_back({});
        }
        res[level].push_back(root->val);
        levelOrder(root->left, level + 1, res);
        levelOrder(root->right, level + 1, res);
    }
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<vector<int>> a;
        levelOrder(root, 0, a);
        vector<long long> b(a.size(), 0);
        for (long long i = 0; i < a.size(); i++)
        {
            for (long long j = 0; j < a[i].size(); j++)
            {
                b[i] += a[i][j];
            }
        }
        vector<double> ans(a.size(), 0.0);
        for (long long i = 0; i < a.size(); i++)
        {
            ans[i] = (((double)(b[i])) / a[i].size());
        }
        return ans;
    }
};
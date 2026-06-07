// Problem: Create Binary Tree From Descriptions
// Link to the problem: https://leetcode.com/problems/create-binary-tree-from-descriptions/
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
    TreeNode *createBinaryTree(vector<vector<int>> &descriptions)
    {
        unordered_map<int, TreeNode *> m;
        unordered_set<int> s;
        for (const vector<int> &description : descriptions)
        {
            const int x = description[0], y = description[1];
            const bool a = description[2] == 1;
            if (!m.count(x))
            {
                m[x] = new TreeNode(x);
            }
            if (!m.count(y))
            {
                m[y] = new TreeNode(y);
            }
            if (a)
            {
                m[x]->left = m[y];
            }
            else
            {
                m[x]->right = m[y];
            }
            s.insert(y);
        }
        for (const pair<int, TreeNode *> i : m)
        {
            if (!s.count(i.first))
            {
                return i.second;
            }
        }
        return nullptr;
    }
};
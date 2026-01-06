// Problem: Kth Largest Sum in a Binary Tree
// Link to the problem: https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/
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
    long long kthLargestLevelSum(TreeNode *root, int k)
    {
        priority_queue<long long> levelSum;
        queue<TreeNode *> q;
        long long sum = 0;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                sum += node->val;
                if (node->left != NULL)
                {
                    q.push(node->left);
                }
                if (node->right != NULL)
                {
                    q.push(node->right);
                }
            }
            levelSum.push(sum);
            sum = 0;
        }
        if (levelSum.size() < k)
        {
            return -1;
        }
        else
        {
            long long ans = 0;
            while (k > 0)
            {
                ans = levelSum.top();
                levelSum.pop();
                k--;
            }
            return ans;
        }
    }
};
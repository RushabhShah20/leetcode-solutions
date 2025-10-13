// Problem: Even Odd Tree
// Link to the problem: https://leetcode.com/problems/even-odd-tree/
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
    bool isOdd(vector<int> &nums)
    {
        for (int num : nums)
        {
            if (num % 2 == 0)
            {
                return false;
            }
        }
        return true;
    }
    bool isEven(vector<int> &nums)
    {
        for (int num : nums)
        {
            if (num % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
    bool isIncreasing(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] <= nums[i - 1])
            {
                return false;
            }
        }
        return true;
    }
    bool isDecreasing(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] >= nums[i - 1])
            {
                return false;
            }
        }
        return true;
    }
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
    bool isEvenOddTree(TreeNode *root)
    {
        vector<vector<int>> ans;
        levelOrder(root, 0, ans);
        for (int i = 0; i < ans.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (!isIncreasing(ans[i]) || !isOdd(ans[i]))
                {
                    return false;
                }
            }
            else
            {
                if (!isDecreasing(ans[i]) || !isEven(ans[i]))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
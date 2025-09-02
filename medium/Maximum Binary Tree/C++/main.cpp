// Problem: Maximum Binary Tree
// Link to the problem: https://leetcode.com/problems/maximum-binary-tree/
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
    TreeNode *solve(TreeNode *root, vector<int> nums)
    {
        if (nums.size() == 0)
        {
            return NULL;
        }
        int x = max_element(nums.begin(), nums.end()) - nums.begin();
        vector<int> prefix(nums.begin(), nums.begin() + x), suffix(nums.begin() + x + 1, nums.end());
        root->val = nums[x];
        root->left = constructMaximumBinaryTree(prefix);
        root->right = constructMaximumBinaryTree(suffix);
        return root;
    }
    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        TreeNode *ans = new TreeNode();
        ans = solve(ans, nums);
        return ans;
    }
};
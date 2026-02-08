// Problem: Balanced Binary Tree
// Link to the problem: https://leetcode.com/problems/balanced-binary-tree/
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution
{
    public int height(TreeNode root)
    {
        if (root == null)
        {
            return 0;
        }
        int l = height(root.left);
        if (l == -1)
        {
            return -1;
        }
        int r = height(root.right);
        if (r == -1)
        {
            return -1;
        }
        if (Math.Abs(l - r) > 1)
        {
            return -1;
        }
        return Math.Max(l, r) + 1;
    }
    public bool IsBalanced(TreeNode root)
    {
        bool ans = height(root) != -1;
        return ans;
    }
}
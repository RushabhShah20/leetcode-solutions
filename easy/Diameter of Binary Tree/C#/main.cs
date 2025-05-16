// Problem: Diameter of Binary Tree
// Link to the problem: https://leetcode.com/problems/diameter-of-binary-tree/
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
    int ans = 0;
    int height(TreeNode root)
    {
        if (root == null)
        {
            return 0;
        }
        int left = height(root.left);
        int right = height(root.right);
        ans = Math.Max(ans, left + right);
        return Math.Max(left, right) + 1;
    }
    public int DiameterOfBinaryTree(TreeNode root)
    {
        height(root);
        return ans;
    }
}
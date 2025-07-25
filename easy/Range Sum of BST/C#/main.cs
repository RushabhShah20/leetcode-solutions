// Problem: Range Sum of BST
// Link to the problem: https://leetcode.com/problems/range-sum-of-bst/
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
    public int RangeSumBST(TreeNode root, int low, int high)
    {
        if (root == null)
        {
            return 0;
        }
        if (low <= root.val && root.val <= high)
        {
            return root.val + RangeSumBST(root.left, low, high) + RangeSumBST(root.right, low, high);
        }
        else if (root.val < low)
        {
            return RangeSumBST(root.right, low, high);
        }
        else
        {
            return RangeSumBST(root.left, low, high);
        }
    }
}
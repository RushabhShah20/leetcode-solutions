// Problem: Binary Tree Level Order Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    public void LevelOrderTraversal(TreeNode root, int level, IList<IList<int>> res)
    {
        if (root == null)
        {
            return;
        }
        if (res.Count <= level)
        {
            res.Add(new List<int>());
        }
        res[level].Add(root.val);
        LevelOrderTraversal(root.left, level + 1, res);
        LevelOrderTraversal(root.right, level + 1, res);
    }
    public IList<IList<int>> LevelOrder(TreeNode root)
    {
        IList<IList<int>> ans = new List<IList<int>>();
        LevelOrderTraversal(root, 0, ans);
        return ans;
    }
}
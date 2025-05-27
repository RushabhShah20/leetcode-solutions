// Problem: Binary Tree Level Order Traversal II
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
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
    public void LevelOrder(TreeNode root, int level, IList<IList<int>> ans)
    {
        if (root == null)
        {
            return;
        }
        if (ans.Count <= level)
        {
            ans.Add(new List<int>());
        }
        ans[level].Add(root.val);
        LevelOrder(root.left, level + 1, ans);
        LevelOrder(root.right, level + 1, ans);
    }
    public IList<IList<int>> LevelOrderBottom(TreeNode root)
    {
        IList<IList<int>> ans = new List<IList<int>>();
        LevelOrder(root, 0, ans);
        return ans.Reverse().ToArray();
    }
}
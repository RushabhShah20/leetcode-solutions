// Problem: Binary Tree Postorder Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    void postOrder(TreeNode root, IList<int> ans)
    {
        if (root == null)
        {
            return;
        }
        postOrder(root.left, ans);
        postOrder(root.right, ans);
        ans.Add(root.val);
    }
    public IList<int> PostorderTraversal(TreeNode root)
    {
        IList<int> ans = new List<int>();
        postOrder(root, ans);
        return ans;
    }
}
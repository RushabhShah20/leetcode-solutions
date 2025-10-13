// Problem: Leaf-Similar Trees
// Link to the problem: https://leetcode.com/problems/leaf-similar-trees/
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
    public void inorder(TreeNode root, List<int> ans)
    {
        if (root == null)
        {
            return;
        }
        inorder(root.left, ans);
        if (root.left == null && root.right == null)
        {
            ans.Add(root.val);
        }
        inorder(root.right, ans);
    }
    public bool LeafSimilar(TreeNode root1, TreeNode root2)
    {
        List<int> ans1 = new List<int>(), ans2 = new List<int>();
        inorder(root1, ans1);
        inorder(root2, ans2);
        return ans1.SequenceEqual(ans2);
    }
}
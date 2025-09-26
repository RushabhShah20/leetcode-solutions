// Problem: All Elements in Two Binary Search Trees
// Link to the problem: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/F
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
    List<int> ans = new List<int>();
    public void InsertInArray(TreeNode root)
    {
        if (root != null)
        {
            ans.Add(root.val);
            if (root.left != null)
            {
                InsertInArray(root.left);
            }
            if (root.right != null)
            {
                InsertInArray(root.right);
            }
        }
    }
    public IList<int> GetAllElements(TreeNode root1, TreeNode root2)
    {
        InsertInArray(root1);
        InsertInArray(root2);
        ans.Sort();
        return ans;
    }
}
// Problem: Leaf-Similar Trees
// Link to the problem: https://leetcode.com/problems/leaf-similar-trees/
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */
class Solution {
    public void inorder(TreeNode root, List<Integer> ans) {
        if (root == null) {
            return;
        }
        inorder(root.left, ans);
        if (root.left == null && root.right == null) {
            ans.add(root.val);
        }
        inorder(root.right, ans);
    }

    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer> ans1 = new ArrayList<>(), ans2 = new ArrayList<>();
        inorder(root1, ans1);
        inorder(root2, ans2);
        return ans1.equals(ans2);
    }
}
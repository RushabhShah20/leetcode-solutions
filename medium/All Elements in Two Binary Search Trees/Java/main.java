// Problem: All Elements in Two Binary Search Trees
// Link to the problem: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/F
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
    List<Integer> ans = new ArrayList<>();

    public void insertToArray(TreeNode root) {
        if (root != null) {
            ans.add(root.val);
            if (root.left != null) {
                insertToArray(root.left);
            }
            if (root.right != null) {
                insertToArray(root.right);
            }
        }
    }

    public List<Integer> getAllElements(TreeNode root1, TreeNode root2) {
        insertToArray(root1);
        insertToArray(root2);
        Collections.sort(ans);
        return ans;
    }
}
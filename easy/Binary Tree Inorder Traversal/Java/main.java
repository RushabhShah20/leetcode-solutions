// Problem: Binary Tree Inorder Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        Stack<TreeNode> s = new Stack<>();
        do {
            while (root != null) {
                s.push(root);
                root = root.left;
            }
            if (!s.empty()) {
                root = s.lastElement();
                s.pop();
                ans.add(root.val);
                root = root.right;
            }
        } while (root != null || !s.empty());
        return ans;
    }
}
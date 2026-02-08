// Problem: Balanced Binary Tree
// Link to the problem: https://leetcode.com/problems/balanced-binary-tree/
/**
 * Definition for a binary tree node.
 * class TreeNode {
 *   int val;
 *   TreeNode? left;
 *   TreeNode? right;
 *   TreeNode([this.val = 0, this.left, this.right]);
 * }
 */
class Solution {
  int height(TreeNode? root) {
    if (root == null) {
      return 0;
    }
    final int l = height(root.left);
    if (l == -1) {
      return -1;
    }
    final int r = height(root.right);
    if (r == -1) {
      return -1;
    }
    if ((l - r).abs() > 1) {
      return -1;
    }
    return max(l, r) + 1;
  }

  bool isBalanced(TreeNode? root) {
    final bool ans = height(root) != -1;
    return ans;
  }
}

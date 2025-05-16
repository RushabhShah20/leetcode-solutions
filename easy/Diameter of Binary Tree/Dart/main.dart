// Problem: Diameter of Binary Tree
// Link to the problem: https://leetcode.com/problems/diameter-of-binary-tree/
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
  int ans = 0;
  int height(TreeNode? root) {
    if (root == null) {
      return 0;
    }
    int left = height(root.left);
    int right = height(root.right);
    ans = max(ans, left + right);
    return max(left, right) + 1;
  }

  int diameterOfBinaryTree(TreeNode? root) {
    height(root);
    return ans;
  }
}

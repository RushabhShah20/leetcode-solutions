// Problem: Range Sum of BST
// Link to the problem: https://leetcode.com/problems/range-sum-of-bst/
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
  int rangeSumBST(TreeNode? root, int low, int high) {
    if (root == null) {
      return 0;
    }
    if (low <= root.val && root.val <= high) {
      return root.val +
          rangeSumBST(root.left, low, high) +
          rangeSumBST(root.right, low, high);
    } else if (root.val < low) {
      return rangeSumBST(root.right, low, high);
    } else {
      return rangeSumBST(root.left, low, high);
    }
  }
}

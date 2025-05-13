// Problem: Binary Tree Preorder Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-preorder-traversal/
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
  List<int> ans = new List.empty(growable: true);
  List<int> preorderTraversal(TreeNode? root) {
    if (root != null) {
      ans.add(root.val);
      preorderTraversal(root.left);
      preorderTraversal(root.right);
    }
    return ans;
  }
}

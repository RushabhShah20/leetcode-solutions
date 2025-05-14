// Problem: Binary Tree Level Order Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal/
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
  void levelOrderTraversal(TreeNode? root, int level, List<List<int>> res) {
    if (root == null) {
      return;
    }
    if (res.length <= level) {
      res.add([]);
    }
    res[level].add(root.val);
    levelOrderTraversal(root.left, level + 1, res);
    levelOrderTraversal(root.right, level + 1, res);
  }

  List<List<int>> levelOrder(TreeNode? root) {
    List<List<int>> ans = new List.empty(growable: true);
    levelOrderTraversal(root, 0, ans);
    return ans;
  }
}

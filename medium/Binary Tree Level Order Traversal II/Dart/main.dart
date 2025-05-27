// Problem: Binary Tree Level Order Traversal II
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
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
  void levelOrder(TreeNode? root, int level, List<List<int>> ans) {
    if (root == null) {
      return;
    }
    if (ans.length <= level) {
      ans.add(new List.empty(growable: true));
    }
    ans[level].add(root.val);
    levelOrder(root.left, level + 1, ans);
    levelOrder(root.right, level + 1, ans);
  }

  List<List<int>> levelOrderBottom(TreeNode? root) {
    List<List<int>> ans = new List.empty(growable: true);
    levelOrder(root, 0, ans);
    return ans.reversed.toList();
  }
}

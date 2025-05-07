// Problem: Binary Tree Postorder Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-postorder-traversal/
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
  void postOrder(TreeNode? root, List<int> ans) {
    if (root == null) {
      return;
    }
    postOrder(root.left, ans);
    postOrder(root.right, ans);
    ans.add(root.val);
  }

  List<int> postorderTraversal(TreeNode? root) {
    List<int> ans = new List.empty(growable: true);
    postOrder(root, ans);
    return ans;
  }
}

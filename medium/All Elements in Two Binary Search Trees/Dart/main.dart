// Problem: All Elements in Two Binary Search Trees
// Link to the problem: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
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
  void insertToArray(TreeNode? root) {
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

  List<int> getAllElements(TreeNode? root1, TreeNode? root2) {
    insertToArray(root1);
    insertToArray(root2);
    ans.sort();
    return ans;
  }
}

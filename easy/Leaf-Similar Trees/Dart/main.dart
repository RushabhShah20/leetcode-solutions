// Problem: Leaf-Similar Trees
// Link to the problem: https://leetcode.com/problems/leaf-similar-trees/
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
  bool areListsEqual(List listA, List listB) {
    if (listA.length != listB.length) {
      return false;
    }
    for (int i = 0; i < listA.length; i++) {
      if (listA[i] != listB[i]) {
        return false;
      }
    }
    return true;
  }

  void inorder(TreeNode? root, List<int> ans) {
    if (root == null) {
      return;
    }
    inorder(root.left, ans);
    if (root.left == null && root.right == null) {
      ans.add(root.val);
    }
    inorder(root.right, ans);
  }

  bool leafSimilar(TreeNode? root1, TreeNode? root2) {
    List<int> ans1 = new List.empty(growable: true),
        ans2 = new List.empty(growable: true);
    inorder(root1, ans1);
    inorder(root2, ans2);
    return areListsEqual(ans1, ans2);
  }
}

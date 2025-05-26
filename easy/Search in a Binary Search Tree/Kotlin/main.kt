// Problem: Search in a Binary Search Tree
// Link to the problem: https://leetcode.com/problems/search-in-a-binary-search-tree/
/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class Solution {
    fun searchBST(root: TreeNode?, `val`: Int): TreeNode? {
        if (root == null) {
            return null;
        }
        if (root.`val` == `val`) {
            return root;
        }
        if (root.`val` > `val`) {
            return searchBST(root.left, `val`);
        }
        return searchBST(root.right, `val`);
    }
}
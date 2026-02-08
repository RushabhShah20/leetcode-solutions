// Problem: Balanced Binary Tree
// Link to the problem: https://leetcode.com/problems/balanced-binary-tree/
/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var height = function (root) {
    if (root === null) {
        return 0;
    }
    const l = height(root.left);
    if (l === -1) {
        return -1;
    }
    const r = height(root.right);
    if (r === -1) {
        return -1;
    }
    if (Math.abs(l - r) > 1) {
        return -1;
    }
    return Math.max(l, r) + 1;
};
var isBalanced = function (root) {
    const ans = height(root) != -1;
    return ans;
};
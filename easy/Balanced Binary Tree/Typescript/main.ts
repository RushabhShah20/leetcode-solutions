// Problem: Balanced Binary Tree
// Link to the problem: https://leetcode.com/problems/balanced-binary-tree/
/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */
function height(root: TreeNode | null): number {
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
}
function isBalanced(root: TreeNode | null): boolean {
    const ans = height(root) != -1;
    return ans;
};
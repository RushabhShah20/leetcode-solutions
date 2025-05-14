// Problem: Binary Tree Level Order Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal/
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
 * @return {number[][]}
 */
var levelOrderTravversal = function (root, level, res) {
    if (root === null) {
        return;
    }
    if (res.length <= level) {
        res.push([])
    }
    res[level].push(root.val);
    levelOrderTravversal(root.left, level + 1, res);
    levelOrderTravversal(root.right, level + 1, res);
}
var levelOrder = function (root) {
    let ans = [];
    levelOrderTravversal(root, 0, ans);
    return ans;
};
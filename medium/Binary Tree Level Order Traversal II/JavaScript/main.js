// Problem: Binary Tree Level Order Traversal II
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
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
var levelOrder = function (root, level, ans) {
    if (root === null) {
        return;
    }
    if (ans.length <= level) {
        ans.push(new Array());
    }
    ans[level].push(root.val);
    levelOrder(root.left, level + 1, ans);
    levelOrder(root.right, level + 1, ans);
}
var levelOrderBottom = function (root) {
    let ans = new Array();
    levelOrder(root, 0, ans);
    ans.reverse();
    return ans;
};
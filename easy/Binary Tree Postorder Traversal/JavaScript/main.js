// Problem: Binary Tree Postorder Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-postorder-traversal/
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
 * @return {number[]}
 */
var postOrder = function (root, ans) {
    if (root === null) {
        return;
    }
    postOrder(root.left, ans);
    postOrder(root.right, ans);
    ans.push(root.val);
};
var postorderTraversal = function (root) {
    let ans = new Array();
    postOrder(root, ans);
    return ans;
};
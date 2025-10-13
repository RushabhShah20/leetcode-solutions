// Problem: Leaf-Similar Trees
// Link to the problem: https://leetcode.com/problems/leaf-similar-trees/
/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
var inorder = function (root, ans) {
    if (root === null) {
        return;
    }
    inorder(root.left, ans);
    if (root.left === null && root.right === null) {
        ans.push(root.val);
    }
    inorder(root.right, ans);
};
var leafSimilar = function (root1, root2) {
    let ans1 = new Array(), ans2 = new Array();
    inorder(root1, ans1);
    inorder(root2, ans2);
    return JSON.stringify(ans1) === JSON.stringify(ans2);
};
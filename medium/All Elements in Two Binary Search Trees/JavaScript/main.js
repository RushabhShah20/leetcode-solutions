// Problem: All Elements in Two Binary Search Trees
// Link to the problem: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/F
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
 * @return {number[]}
 */
let ans = new Array();
var insertToArray = function (root) {
    if (root !== null) {
        ans.push(root.val);
        if (root.left !== null) {
            insertToArray(root.left);
        }
        if (root.right !== null) {
            insertToArray(root.right);
        }
    }
};
var getAllElements = function (root1, root2) {
    ans = new Array();
    insertToArray(root1);
    insertToArray(root2);
    ans.sort((a, b) => a - b);
    return ans;
};
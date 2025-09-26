// Problem: All Elements in Two Binary Search Trees
// Link to the problem: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/F
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

let ans: number[] = new Array();
function insertToArray(root: TreeNode | null) {
    if (root !== null) {
        ans.push(root.val);
        if (root.left !== null) {
            insertToArray(root.left);
        }
        if (root.right !== null) {
            insertToArray(root.right);
        }
    }
}
function getAllElements(root1: TreeNode | null, root2: TreeNode | null): number[] {
    ans = new Array();
    insertToArray(root1);
    insertToArray(root2);
    ans.sort((a, b) => a - b);
    return ans;
};
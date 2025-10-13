// Problem: Leaf-Similar Trees
// Link to the problem: https://leetcode.com/problems/leaf-similar-trees/
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
function inorder(root: TreeNode | null, ans: number[]) {
    if (root === null) {
        return;
    }
    inorder(root.left, ans);
    if (root.left === null && root.right === null) {
        ans.push(root.val);
    }
    inorder(root.right, ans);
}
function leafSimilar(root1: TreeNode | null, root2: TreeNode | null): boolean {
    let ans1: number[] = new Array(), ans2: number[] = new Array();
    inorder(root1, ans1);
    inorder(root2, ans2);
    return JSON.stringify(ans1) === JSON.stringify(ans2);
};
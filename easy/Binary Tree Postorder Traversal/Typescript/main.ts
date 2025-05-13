// Problem: Binary Tree Postorder Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-postorder-traversal/
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

function postOrder(root: TreeNode | null, ans: number[]) {
    if (root === null) {
        return;
    }
    postOrder(root.left, ans);
    postOrder(root.right, ans);
    ans.push(root.val);
}
function postorderTraversal(root: TreeNode | null): number[] {
    let ans: number[] = [];
    postOrder(root, ans);
    return ans;
};
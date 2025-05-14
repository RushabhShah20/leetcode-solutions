// Problem: Binary Tree Level Order Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal/
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
function levelOrderTraversal(root: TreeNode | null, level: number, res: number[][]) {
    if (root === null) {
        return;
    } if (res.length <= level) {
        res.push([]);
    }
    res[level].push(root.val);
    levelOrderTraversal(root.left, level + 1, res);
    levelOrderTraversal(root.right, level + 1, res);
}
function levelOrder(root: TreeNode | null): number[][] {
    let ans: number[][] = []
    levelOrderTraversal(root, 0, ans);
    return ans;
};
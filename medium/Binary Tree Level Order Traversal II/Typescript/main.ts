// Problem: Binary Tree Level Order Traversal II
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
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
function levelOrder(root: TreeNode | null, level: number, ans: number[][]) {
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
function levelOrderBottom(root: TreeNode | null): number[][] {
    let ans: number[][] = new Array();
    levelOrder(root, 0, ans);
    ans.reverse();
    return ans;
};
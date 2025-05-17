// Problem: Maximum Depth of Binary Tree
// Link to the problem: https://leetcode.com/problems/maximum-depth-of-binary-tree/
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func maxDepth(root *TreeNode) int {
	if root == nil {
		return 0
	}
	var left int = maxDepth(root.Left)
	var right int = maxDepth(root.Right)
	return max(left, right) + 1
}

// Problem: Balanced Binary Tree
// Link to the problem: https://leetcode.com/problems/balanced-binary-tree/
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func height(root *TreeNode) int {
	if root == nil {
		return 0
	}
	var l int = height(root.Left)
	if l == -1 {
		return -1
	}
	var r int = height(root.Right)
	if r == -1 {
		return -1
	}
	if int(math.Abs(float64(l-r))) > 1 {
		return -1
	}
	return max(l, r) + 1
}
func isBalanced(root *TreeNode) bool {
	var ans bool = height(root) != -1
	return ans
}

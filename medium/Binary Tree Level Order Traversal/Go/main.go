// Problem: Binary Tree Level Order Traversal
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal/
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func levelOrderTraversal(root *TreeNode, level int, res *[][]int) {
	if root == nil {
		return
	}
	if len(*res) <= level {
		*res = append(*res, []int{})
	}
	(*res)[level] = append((*res)[level], root.Val)
	levelOrderTraversal(root.Left, level+1, res)
	levelOrderTraversal(root.Right, level+1, res)
}
func levelOrder(root *TreeNode) [][]int {
	var ans [][]int
	levelOrderTraversal(root, 0, &ans)
	return ans
}

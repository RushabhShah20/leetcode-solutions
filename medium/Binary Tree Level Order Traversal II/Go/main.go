// Problem: Binary Tree Level Order Traversal II
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func levelOrder(root *TreeNode, level int, ans *[][]int) {
	if root == nil {
		return
	}
	if len(*ans) <= level {
		*ans = append(*ans, []int{})
	}
	(*ans)[level] = append((*ans)[level], root.Val)
	levelOrder(root.Left, level+1, ans)
	levelOrder(root.Right, level+1, ans)
}
func levelOrderBottom(root *TreeNode) [][]int {
	var ans [][]int
	levelOrder(root, 0, &ans)
	for i, j := 0, len(ans)-1; i < j; i, j = i+1, j-1 {
		ans[i], ans[j] = ans[j], ans[i]
	}
	return ans
}

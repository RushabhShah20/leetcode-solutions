// Problem: All Elements in Two Binary Search Trees
// Link to the problem: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
var ans []int

func insertToArray(root *TreeNode) {
	if root != nil {
		ans = append(ans, root.Val)
		if root.Left != nil {
			insertToArray(root.Left)
		}
		if root.Right != nil {
			insertToArray(root.Right)
		}
	}
}
func getAllElements(root1 *TreeNode, root2 *TreeNode) []int {
	ans = []int{}
	insertToArray(root1)
	insertToArray(root2)
	sort.Ints(ans)
	return ans
}
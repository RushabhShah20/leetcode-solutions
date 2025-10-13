// Problem: Leaf-Similar Trees
// Link to the problem: https://leetcode.com/problems/leaf-similar-trees/
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func inorder(root *TreeNode, ans *[]int) {
	if root == nil {
		return
	}
	inorder(root.Left, ans)
	if root.Left == nil && root.Right == nil {
		*ans = append(*ans, root.Val)
	}
	inorder(root.Right, ans)
}
func leafSimilar(root1 *TreeNode, root2 *TreeNode) bool {
	var ans1, ans2 []int
	inorder(root1, &ans1)
	inorder(root2, &ans2)
	if len(ans1) != len(ans2) {
		return false
	}

	for i := 0; i < len(ans1); i++ {
		if ans1[i] != ans2[i] {
			return false
		}
	}

	return true
}

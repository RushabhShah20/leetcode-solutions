# Problem: Lowest Common Ancestor of a Binary Tree
# Link to the problem: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def lowestCommonAncestor(
        self, root: "TreeNode", p: "TreeNode", q: "TreeNode"
    ) -> "TreeNode":
        if root == None or root == p or root == q:
            return root
        left: "TreeNode" = self.lowestCommonAncestor(root.left, p, q)
        right: "TreeNode" = self.lowestCommonAncestor(root.right, p, q)
        if left == None:
            return right
        elif right == None:
            return left
        else:
            return root

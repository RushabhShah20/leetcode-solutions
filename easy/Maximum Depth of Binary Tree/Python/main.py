# Problem: Maximum Depth of Binary Tree
# Link to the problem: https://leetcode.com/problems/maximum-depth-of-binary-tree/
# Definition for a binary tree node.
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root == None:
            return 0
        left: int = self.maxDepth(root.left)
        right: int = self.maxDepth(root.right)
        return max(left, right) + 1

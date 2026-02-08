# Problem: Balanced Binary Tree
# Link to the problem: https://leetcode.com/problems/balanced-binary-tree/
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def height(self, root: Optional[TreeNode]) -> int:
        if root == None:
            return 0
        l: int = self.height(root.left)
        if l == -1:
            return -1
        r: int = self.height(root.right)
        if r == -1:
            return -1
        if abs(l - r) > 1:
            return -1
        return max(l, r) + 1

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        ans: bool = self.height(root) != -1
        return ans
